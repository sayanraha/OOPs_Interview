#include <bits/stdc++.h>
using namespace std;

// Declaration of a class named 'Hero'
// I can also write the class in some other file and then import that file in our this current file.
class Hero
{

    // properties of the class
    //  char name[100];

public:
    int health;
    char level;

    // default constructor
    Hero()
    {
    }
    // What will be the size if it is an empty class(no properties)?
    // size of this empty class will be 1byte by default ,as the system gives this value to give identification and to track this class.

    // Access modifiers
    /*

         1. public -> data members and member functions etc's can be accessed anywhere from inside the class or outside the class

         2. private ->  data members and member functions etc's can be accessed inside the class only.

         3. protected

    *** Note****
     By default class k andar access modifier private hota hain

    */

    /*
          Getters and Setters

          Getters and setters in C++ are methods used to retrieve (get) and modify (set) the private member variables of a class. They help ensure encapsulation by providing controlled access to class members, allowing manipulation of internal data in a controlled and consistent manner.

    */
};

int main()
{
    /*
        // Syntax for object creation :

        Hero h1;// h1 is the object and is holding garbage value since no value is assigned

       // cout<<"size of  h1:"<<sizeof(h1);

       // To access properties or data members we usually use the dot operator '.' .

       cout<<"Health is"<<h1.health;
       cout<<"Level is"<<h1.level;
    */

    /*

        Static vs Dynamic allocations


    Static: Objects are created at compile-time or program startup with fixed memory allocation.

    Dynamic: Objects are created at runtime using dynamic memory allocation, with variable memory allocation on the heap.


        // static allocation
         Hero h1;
        cout<<"Level is "<<h1.level<<endl;
        cout<<"Health is "<<h1.health<<endl;

         // dynamic allocation
         Hero *h2 = new Hero;

         /*

         cout<<"Level is "<<(*h2).level<<endl;
         cout<<"Health is "<<(*h2).health<<endl;



         //another way is using ->
        cout<<"Level is "<<h2->level<<endl;
        cout<<"Health is "<<h2->health<<endl;

    */

    /*

     Constructor : properties

     this is default constructor
     -> Invoked during object creation time
     -> Has No return type/void
     -> No input parameter by default

     Hero h;

    */

    /* Parameterised constructor

    A parameterized constructor in C++ is a constructor that accepts parameters during object creation. It allows you to initialize the object's member variables with specific values provided at the time of object instantiation.

 Here's a simple example:
 #include <iostream>

 class MyClass {
 private:
     int x;
     int y;

 public:
     // Parameterized constructor
     MyClass(int a, int b) {
         x = a;
         y = b;
     }

     void display() {
         std::cout << "x: " << x << ", y: " << y << std::endl;
     }
 };

 int main() {
     // Creating object with parameterized constructor
     MyClass obj(10, 20);

     // Calling display function to show initialized values
     obj.display();

     return 0;
 }

      */

    /*****************************************************************************************************************************/

    /*
       this keyword -> In C++, `this` is a pointer that holds the address of the current object. It's implicitly available within non-static member functions and can be used to access members of the current object.
       example :-

#include <iostream>

    class MyClass
    {
    private:
        int x;

    public:
        MyClass(int x)
        {
            // Using this pointer to differentiate between class member and parameter
            this->x = x;
        }

        void printX()
        {
            // Accessing class member using this pointer
            std::cout << "Value of x: " << this->x << std::endl;
        }
    };

    int main()
    {
        MyClass obj(10);
        obj.printX();
        return 0;
    }
    */
    /***********************************************************************************************************************/

    /*Copy constructor : A copy constructor in C++ is a special constructor that creates a new object as a copy of an existing object of the same class. It initializes a new object using the values of an existing object.

    #include <iostream>

        class MyClass
        {
        private:
            int x;

        public:
            // Default constructor
            MyClass()
            {
                x = 0;
            }

            // Parameterized constructor
            MyClass(int val)
            {
                x = val;
            }

            // Copy constructor -> my custom copy constructor (&) for pass by reference
            MyClass(const MyClass &obj)
            {
                x = obj.x;
            }

            void display()
            {
                std::cout << "x: " << x << std::endl;
            }
        };

        int main()
        {
            // Creating objects
            MyClass obj1(10);
            MyClass obj2 = obj1; // Using copy constructor

            // Displaying values
            obj1.display(); // Output: x: 10
            obj2.display(); // Output: x: 10

            return 0;
        }
    */

    /* xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx */

    /* Deep Copy and  Shallow copy


                SHALLOW COPY

    -> Shallow copy involves copying the elements of one object to another, but if the objects contain pointers to dynamically allocated memory, only the memory addresses are copied, not the data itself. This means both objects will point to the same memory locations. Any changes made to the data through one object will reflect in the other.

    -> Shallow copying is the default behavior provided by the compiler if you use the default copy constructor and assignment operator generated by the compiler.

    -> Shallow copy is generally fine for simple objects without dynamically allocated memory or if sharing of data is intended.

            #include <iostream>
            #include <cstring>

        class ShallowCopy
        {
        private:
            int *data;

        public:
            ShallowCopy(int val)
            {
                data = new int;
                *data = val;
            }

            // Copy constructor (shallow)
            ShallowCopy(const ShallowCopy &other)
            {
                data = other.data;
            }

            ~ShallowCopy()
            {
                delete data;
            }

            int getData() const
            {
                return *data;
            }
        };

        int main()
        {
            ShallowCopy obj1(5);
            ShallowCopy obj2 = obj1; // Shallow copy

            std::cout << "Data in obj1: " << obj1.getData() << std::endl;
            std::cout << "Data in obj2: " << obj2.getData() << std::endl;

            // Modifying obj1 data
            *obj1.data = 10;

            std::cout << "Data in obj1 after modification: " << obj1.getData() << std::endl;
            std::cout << "Data in obj2 after modification through obj1: " << obj2.getData() << std::endl;

            return 0;
        }

        Output :
        Data in obj1: 5
        Data in obj2: 5
        Data in obj1 after modification: 10
        Data in obj2 after modification through obj1: 10







        DEEP COPY :

    -> Deep copy involves creating a new object and then copying the content of the original object, including any dynamically allocated memory. This means that each object has its own copy of the data, and changes in one object won't affect the other.

    -> Deep copy usually requires defining a custom copy constructor and assignment operator to ensure that all necessary memory allocations are duplicated.

        #include <iostream>
        #include <cstring>

        class DeepCopy {
            private:
                int* data;

        public:
                DeepCopy(int val) {
                    data = new int;
                *data = val;
        }

        // Copy constructor (deep)
        DeepCopy(const DeepCopy& other) {
            data = new int;
            *data = *other.data;
        }

        ~DeepCopy() {
            delete data;
        }

        int getData() const {
            return *data;
        }
    };

        int main() {
        DeepCopy obj1(5);
        DeepCopy obj2 = obj1; // Deep copy

        std::cout << "Data in obj1: " << obj1.getData() << std::endl;
        std::cout << "Data in obj2: " << obj2.getData() << std::endl;

        // Modifying obj1 data
        *obj1.data = 10;

        std::cout << "Data in obj1 after modification: " << obj1.getData() << std::endl;
        std::cout << "Data in obj2 after modification through obj1: " << obj2.getData() << std::endl;

        return 0;
    }

        Output :
        Data in obj1: 5
        Data in obj2: 5
        Data in obj1 after modification: 10
        Data in obj2 after modification through obj1: 5

    */

    /*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

    /*
            Copy assignment operator :
            the copy assignment operator is a special member function that allows you to assign one object to another of the same type. It is used to perform shallow or deep copying, depending on how it's implemented.
    */

    /*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

    /*


            Destructor :

        In C++, a destructor is a special member function of a class that is automatically called when an object goes out of scope or is explicitly deleted. Its primary purpose is to release any resources allocated by the object, such as dynamically allocated memory or file handles. It does not have any return type nor input parameters.

        Note :
        Static allocation -> Destructor is called automatically
        Dynamic allocation -> Destructor is called manually


        #include <iostream>

        class MyClass
        {
        private:
            int *data;

        public:
            // Constructor
            MyClass(int val)
            {
                data = new int(val);
                std::cout << "Constructor called" << std::endl;
            }

            // Destructor
            ~MyClass()
            {
                delete data; // Free dynamically allocated memory
                std::cout << "Destructor called" << std::endl;
            }

            int getData() const
            {
                return *data;
            }
        };

        int main()
        {
            {
                // static allocation
                MyClass obj(5);
                std::cout << "Data in obj: " << obj.getData() << std::endl;
            } // obj goes out of scope here, destructor is called

            std::cout << "Outside the scope" << std::endl;


            // Dynamic allocation

            MyClass *newobj = new MyClass();
            delete newobj; // destructor called manually

            return 0;
        }


    */

    /*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

    /*
        const keyword :

       1. Constant Objects: You can create objects that are constant using the const keyword. This means that their member variables cannot be modified after initialization.


        class MyClass
        {
            public:
                  int value;
                  MyClass(int v) : value(v) {}
       };

        int main()
        {
            const MyClass obj(5);
             // obj.value = 10; // Compilation error, as obj is const
              return 0;
        }



    2. Constant Member Functions:
        In a class, you can declare member functions as const. This indicates that these functions do not modify the object's state. They can be called on both constant and non-constant objects.

    class MyClass {
    public:
        int getValue() const {
        return value; // Can read value, but cannot modify it
    }

    private:
        int value;
    };

    int main() {
        const MyClass obj(5);
        int val = obj.getValue(); // Okay
    //  obj.setValue(10); // Compilation error, as obj is const
        return 0;
}

    */





   /*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


   /*

    static  KEYWORD :


    In C++ object-oriented programming (OOP), the `static` keyword is used to declare members (variables or functions) that belong to the class itself, rather than to instances (objects) of the class. Here's how `static` works in different contexts:

1. Static Member Variables:
   - When a member variable is declared as `static`, it is shared by all instances of the class. There's only one copy of the variable that is shared among all objects of the class.

   
   #include <iostream>

   class MyClass {
   public:
       static int count; // Declaration of a static member variable

       MyClass() {
           count++; // Accessing and modifying static member variable
       }
   };

   int MyClass::count = 0; // Definition and initialization of the static member variable

   int main() {
       MyClass obj1;
       MyClass obj2;
       MyClass obj3;

       std::cout << "Number of objects created: " << MyClass::count << std::endl; // Accessing static member using class name
       return 0;
   }


2. Static Member Functions:
   - When a member function is declared as `static`, it can be called without an object of the class. These functions operate on class-level data and don't have access to instance-specific data.

   
   #include <iostream>

   class MyClass {
   public:
       static void printMessage() {
           std::cout << "Hello from static function!" << std::endl;
       }
   };

   int main() {
       MyClass::printMessage(); // Calling static member function without an object
       return 0;
   }
 

3. Static Local Variables :
   - When a variable is declared as `static` within a function, its lifetime extends across multiple invocations of the function, and it retains its value between function calls.

   
   #include <iostream>

   void increment() {
       static int counter = 0; // Static local variable
       counter++;
       std::cout << "Counter: " << counter << std::endl;
   }

   int main() {
       increment(); // Output: Counter: 1
       increment(); // Output: Counter: 2
       increment(); // Output: Counter: 3
       return 0;
   }
   

The `static` keyword provides a way to define class-wide variables and functions, as well as retain the value of local variables across function calls. It's a powerful feature for managing class-level data and functionality.
   
   */
    return 0;
}