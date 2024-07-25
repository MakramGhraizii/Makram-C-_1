#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

// Base class Animal
class Animal {
protected:
    std::string name;
    int age;
    double price;  // Price in dollars

public:
    Animal(const std::string& n, int a, double p);
    virtual ~Animal();

    // Pure virtual function for making sound
    virtual void makeSound() const = 0;

    // Getters
    std::string getName() const;
    int getAge() const;
    double getPrice() const;

    // Setters
    void setName(const std::string& n);
    void setAge(int a);
    void setPrice(double p);
};

// Derived class Dog
class Dog : public Animal {
public:
    Dog(const std::string& n, int a, double p);

    // Override makeSound() function
    void makeSound() const override;
};

// Derived class Cat
class Cat : public Animal {
public:
    Cat(const std::string& n, int a, double p);

    // Override makeSound() function
    void makeSound() const override;
};

#endif // ANIMAL_H
