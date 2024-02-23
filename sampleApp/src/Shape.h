#ifndef SHAPE_H
#define SHAPE_H
#include "factoryLib.h"

// CRTP pattern
struct Shape : Factory<Shape, int>
{
    // key is for passkey idiom for saftey
    Shape(Key)
    {
        int a = 0;
    }
    virtual void doSomething() = 0;

};

class Circle : public Shape::Registrar<Circle>
{
public:
    Circle(int x) : m_x(x)
    {
        int a = 0;
    }

    void doSomething() { std::cerr << "Circle var: " << m_x << "\n"; }

private:
    int m_x;
};

class Rectangle : public Shape::Registrar<Rectangle>
{
public:
    Rectangle(int x) : m_x(x) {}

    void doSomething() { std::cerr << "Rectangle var: " << m_x << "\n"; }

private:
    int m_x;
};


#endif