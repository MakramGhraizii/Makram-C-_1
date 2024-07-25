#include "Animal.h"

// Animal class methods
Animal::Animal(const std::string& n, int a, double p) : name(n), age(a), price(p) {}

Animal::~Animal() {}

std::string Animal::getName() const {
    return name;
}

int Animal::getAge() const {
    return age;
}

double Animal::getPrice() const {
    return price;
}

void Animal::setName(const std::string& n) {
    name = n;
}

void Animal::setAge(int a) {
    age = a;
}

void Animal::setPrice(double p) {
    price = p;
}

// Dog class methods
Dog::Dog(const std::string& n, int a, double p) : Animal(n, a, p) {}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

// Cat class methods
Cat::Cat(const std::string& n, int a, double p) : Animal(n, a, p) {}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
