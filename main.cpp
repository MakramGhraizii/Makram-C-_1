#include <iostream>
#include "PetShop.h"

int main() {
    // Create a pet shop
    PetShop petShop;

    // Add some animals to the shop
    petShop.addAnimal(new Dog("Buddy", 3, 200.0));
    petShop.addAnimal(new Cat("Whiskers", 2, 150.0));
    petShop.addAnimal(new Dog("Max", 5, 300.0));

    // Display all animals in the shop
    petShop.displayAnimals();
    // Example of finding an animal by name and making it speak
    std::string searchName = "Whiskers";
    Animal* foundAnimal = petShop.findAnimalByName(searchName);
    if (foundAnimal != nullptr) {
        std::cout << "Found " << searchName << ": ";
        foundAnimal->makeSound();
    } else {
        std::cout << "Animal with name " << searchName << " not found." << std::endl;
    }

    // Example of selling an animal
    std::string sellName = "Max";
    try {
        petShop.sellAnimal(sellName);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Display remaining animals after selling
    std::cout << "After selling " << sellName << ", remaining animals:\n";
    petShop.displayAnimals();

    return 0;
}
