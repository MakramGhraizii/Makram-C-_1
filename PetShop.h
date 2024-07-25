#ifndef PETSHOP_H
#define PETSHOP_H

#include <vector>
#include <stdexcept>
#include "Animal.h"

// PetShop class
class PetShop {
private:
    std::vector<Animal*> animals; // Use std::vector

public:
    ~PetShop();

    void addAnimal(Animal* animal);
    void displayAnimals() const;
    Animal* findAnimalByName(const std::string& name) const;
    void sellAnimal(const std::string& name);
};

#endif // PETSHOP_H
