# Epen-Test-Task
A C++ factory class that extended with an auto-registry feature 

Please design and implement a generic(template-based) C++ factory class with the following specification in a library module and also implement a sample executable which will be linked against that library and showcase the usage.

Factory Class Library:
	-Should be generic to support various interface/derived classes combinations
	-Should be auto-registering, so when you derive and implement a new class from the common interface/or your specific registrar class, the new derived class should be automatically registered within that specific generic factory class
	-Should support derived classes with different constructor parameters
	-Each derived class should have a unique id base don which will be registered within the factory class
	-Should have a static method for derived class instantiation
	-Should at least include have two or more derived classes 

Sample Application:
Should be linked against the factory library and showcase its usage by instantiating all of the registered classed inside it and do a method call

IDE: VSCode, Debugging Enabled
Build System: CMake, Using Presets
