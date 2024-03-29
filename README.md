
This is a generic C++ factory class that **automatically** registers new derived classes when implemented. 
* It supports various combinations of interface and derived classes. 
* Each derived class should have a unique identifier registered within the factory. 
* The factory have a static method for instantiating derived classes. 

The project includes a sample executable that will be linked to the factory library.
This executable shows how to instantiate all registered classes within the factory and make a method call.

Environment:
* IDE: VSCode with debugging enabled
* Build System: CMake with presets.


This code is based on below link: 
https://www.nirfriedman.com/2018/04/29/unforgettable-factory/
