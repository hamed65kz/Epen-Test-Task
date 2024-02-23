#ifndef FRUITS_H
#define FRUITS_H
#include "factoryLib.h"

// CRTP pattern
struct Fruit : Factory<Fruit, int, float>
{
    // key is for passkey idiom for saftey
    Fruit(Key)
    {
        int a = 0;
    }
    virtual void doSomething() = 0;

};

class Apple : public Fruit::Registrar<Apple>
{
public:
    Apple(int x ,float y) : m_x(x),m_y(y)
    {
        int a = 0;
    }

    void doSomething() { std::cerr << "Apple vars : " << m_x << ","<<m_y<<"\n"; }

private:
    int m_x;
    float m_y;
};

class Orange : public Fruit::Registrar<Orange>
{
public:
    Orange(int x ,float y) : m_x(x),m_y(y)
    {
        int a = 0;
    }

    void doSomething() { std::cerr << "Orange vars : " << m_x << ","<<m_y<<"\n"; }

private:
    int m_x;
    float m_y;
};
#endif