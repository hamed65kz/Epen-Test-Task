#ifndef FACTORY_H
#define FACTORY_H


#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include "getType.h"
#include <cstdlib>


template <class Base, class... Args>
class Factory
{
public:
    template <class... T>
    // static method for derived class instantiation
    static std::unique_ptr<Base> make(const std::string &s, T &&...args)
    {
        auto ss = data().at(s);
        return data().at(s)(std::forward<T>(args)...);
    }

    template <class T>
    struct Registrar : Base
    {
        friend T;

        static bool registerT()
        {
            const auto name = demangle(typeid(T).name()); //demangling for convert/remove compiler symbols to origin form 
            Factory::data()[name] = [](Args... args) -> std::unique_ptr<Base>
            {
                return std::make_unique<T>(std::forward<Args>(args)...);
            };
            return true;
        }
        static bool registered;

    private:
        Registrar() : Base(Key{})
        {
            (void)registered;
        }
    };

    friend Base;

private:
    // use Passkey Idiom for stopping users from inheriting directly from the base class
    // only ragisrar is friend with key and could run its private constructor.
    // more details on : https://arne-mertz.de/2016/10/passkey-idiom/
    class Key
    {
        Key()
        {
            int a = 0;
        };
        template <class T>
        friend struct Registrar;
    };
    using FuncType = std::unique_ptr<Base> (*)(Args...);
    Factory() = default;

    static auto &data()
    {
        static std::unordered_map<std::string, FuncType> s;
        return s;
    }
};

//registerT() method call on derived class definition and handle auto-registration for us. 
template <class Base, class... Args>
template <class T>
bool Factory<Base, Args...>::Registrar<T>::registered = Factory<Base, Args...>::Registrar<T>::registerT();


#endif