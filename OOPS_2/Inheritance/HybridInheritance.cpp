 // - Hybrid Inheritance: Combination of multiple inheritance and single-level inheritance, where different classes are involved in a complex inheritance hierarchy.



#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    string species;

    Animal(string sp) : species(sp) {}

    void display_species() {
        cout << "Species: " << species << endl;
    }
};

// Base class 2
class Pet {
public:
    string name;

    Pet(string nm) : name(nm) {}

    void display_name() {
        cout << "Name: " << name << endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    string breed;

    Dog(string sp, string br) : Animal(sp), breed(br) {}

    void display_breed() {
        cout << "Breed: " << breed << endl;
    }
};

// Derived class from Pet
class Cat : public Pet {
public:
    string breed;

    Cat(string nm, string br) : Pet(nm), breed(br) {}

    void display_breed() {
        cout << "Breed: " << breed << endl;
    }
};

// Derived class from both Dog and Cat
class HybridAnimal : public Dog, public Cat {
public:
    HybridAnimal(string sp_dog, string br_dog, string nm_cat, string br_cat) : Dog(sp_dog, br_dog), Cat(nm_cat, br_cat) {}
};

int main() {
    // Creating an instance of HybridAnimal
    HybridAnimal hybrid("Canine", "Golden Retriever", "Feline", "Persian");

    // Accessing methods from Animal, Pet, Dog, and Cat classes
    hybrid.display_species();  // This will display species of Dog
    hybrid.display_name();     // This will display name of Cat
    hybrid.Dog::display_breed();    // This will display breed of Cat
    return 0;
}

