# Constructor-Destructor-cpp

Theory

In C++, a constructor is a special member function of a class that is automatically called when an object is created. It initializes the object. Constructors have the same name as the class and no return type.
A destructor is also a special function, automatically invoked when an object goes out of scope or is deleted, used to release resources.

Types of Constructors:

Default Constructor – Takes no arguments and provides default initialization.

Parameterized Constructor – Takes parameters to initialize objects with specific values.

Copy Constructor – Creates a new object as a copy of an existing object.

Destructor:

Same name as the class but preceded by ~.

No return type, no parameters.

Used for cleanup tasks.

Algorithm

Start the program.

Define a class.

Declare/define different constructors:

Default constructor (inside or outside class).

Parameterized constructor to initialize values.

Copy constructor to copy values from another object.

Define a destructor to display a message or release resources.

In main():

Create objects using default, parameterized, and copy constructors.

Observe automatic invocation of constructors and destructor.

End program.

Conclusion

Constructors initialize objects automatically at the time of creation.

Default, parameterized, and copy constructors provide flexibility in object initialization.

Destructor is automatically called when objects are destroyed, ensuring proper cleanup.

Together, they demonstrate object lifecycle management in C++.
