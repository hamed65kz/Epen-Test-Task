#include <iostream>
#include "factoryLib.h"
#include "src/Shape.h"
#include "src/Fruits.h"


int main(int, char**){

    //we have two interfaces, Shape and Fruit
    //Shape includes Circle and Rectangle
    //Fruite includes Apple and Orange 

    //we use class name as a unique id for registration 
    auto x = Shape::make("Circle", 3);
	auto y = Shape::make("Rectangle", 2);
	x->doSomething();
	y->doSomething();


    //Factory supports various interface/derived classes combinations
    //Apple class has different constructor signature.
	auto f = Fruit::make("Apple", 4 , 5.5);
	f->doSomething();
    
    auto z = Fruit::make("Orange", 10 , 64.5);
	z->doSomething();

}
