#include "PetShop.h"

// PetShop class methods
PetShop::~PetShop() {
    for (auto& animal : animals) {
        delete animal;
    }
}

void PetShop::addAnimal(Animal* animal) {
    animals.push_back(animal);
}

void PetShop::displayAnimals() const {
    std::cout << "Pets available in the shop:\n";
    for (const auto& animal : animals) {
        std::cout << animal->getName() << " (Age: " << animal->getAge() << ", Price: $" << animal->getPrice() << ")" << std::endl;
    }
}

Animal* PetShop::findAnimalByName(const std::string& name) const {
    for (const auto& animal : animals) {
        if (animal->getName() == name) {
            return animal;
        }
    }
    return nullptr; // Animal not found
}

void PetShop::sellAnimal(const std::string& name) {
    auto it = animals.begin();
    while (it != animals.end()) {
        if ((*it)->getName() == name) {
            delete *it;
            it = animals.erase(it);
            std::cout << name << " has been sold." << std::endl;
            return;
        } else {
            ++it;
        }
    }
    throw std::runtime_error("Animal not found in the shop.");
}
