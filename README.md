# Makram-C-_1 - Pet Shop Management System

## Overview

This project implements a simple pet shop management system in C++. It demonstrates the use of object-oriented programming (OOP) principles by defining an `Animal` base class and two derived classes, `Dog` and `Cat`. The system includes functionality to add animals to a pet shop, display their details, find animals by name, and sell them.

## Project Structure

The project is structured as follows:

- `Animal.h`: Contains the declarations for the `Animal`, `Dog`, and `Cat` classes.
- `Animalclass.cpp`: Contains the definitions for the methods in the `Animal`, `Dog`, and `Cat` classes.
- `PetShop.h`: Contains the declaration for the `PetShop` class.
- `PetShop.cpp`: Contains the definitions for the methods in the `PetShop` class.
- `main.cpp`: Contains the `main` function that tests the functionality of the pet shop system.

## File Descriptions

### `Animal.h`

This header file defines the `Animal` base class and its derived classes `Dog` and `Cat`.

- **Animal Class**
  - **Members**:
    - `std::string name`: The name of the animal.
    - `int age`: The age of the animal.
    - `double price`: The price of the animal in dollars.
  - **Constructor**: `Animal(const std::string& n, int a, double p)`: Initializes the `name`, `age`, and `price` of the animal.
  - **Destructor**: `virtual ~Animal()`: Virtual destructor for proper cleanup of derived class objects.
  - **Methods**:
    - `virtual void makeSound() const = 0;`: Pure virtual function to make a sound. Must be overridden in derived classes.
    - `std::string getName() const`: Returns the name of the animal.
    - `int getAge() const`: Returns the age of the animal.
    - `double getPrice() const`: Returns the price of the animal.
    - `void setName(const std::string& n)`: Sets the name of the animal.
    - `void setAge(int a)`: Sets the age of the animal.
    - `void setPrice(double p)`: Sets the price of the animal.

- **Dog Class**: Inherits from `Animal`.
  - **Constructor**: `Dog(const std::string& n, int a, double p)`: Initializes the `Dog` object using the `Animal` constructor.
  - **Methods**:
    - `void makeSound() const override`: Prints "Woof! Woof!" to the console.

- **Cat Class**: Inherits from `Animal`.
  - **Constructor**: `Cat(const std::string& n, int a, double p)`: Initializes the `Cat` object using the `Animal` constructor.
  - **Methods**:
    - `void makeSound() const override`: Prints "Meow! Meow!" to the console.

### `Animalclass.cpp`

This file contains the implementations of the methods declared in `Animal.h`.

- **Animal Class**:
  - Constructor and Destructor: Initializes and cleans up the object.
  - Getter and Setter Methods: Define how to access and modify the private members of the class.
  
- **Dog and Cat Classes**:
  - `makeSound()` method implementations that print the respective sounds.

### `PetShop.h`

This header file defines the `PetShop` class.

- **PetShop Class**:
  - **Members**:
    - `std::vector<Animal*> animals`: A vector to store pointers to `Animal` objects.
  - **Methods**:
    - `~PetShop()`: Destructor to clean up dynamically allocated `Animal` objects.
    - `void addAnimal(Animal* animal)`: Adds an `Animal` pointer to the `animals` vector.
    - `void displayAnimals() const`: Displays details of all animals in the pet shop.
    - `Animal* findAnimalByName(const std::string& name) const`: Finds and returns an `Animal` pointer by its name, or `nullptr` if not found.
    - `void sellAnimal(const std::string& name)`: Finds and deletes an animal by its name, and removes it from the vector. Throws an exception if the animal is not found.

### `PetShop.cpp`

This file contains the implementations of the methods declared in `PetShop.h`.

- **PetShop Class**:
  - **Destructor**: Loops through the `animals` vector and deletes each `Animal` pointer.
  - **addAnimal**: Adds an `Animal` pointer to the `animals` vector.
  - **displayAnimals**: Iterates through the `animals` vector and prints each animal’s details.
  - **findAnimalByName**: Searches for an animal by name in the `animals` vector and returns the pointer if found.
  - **sellAnimal**: Searches for an animal by name, deletes it, and removes it from the vector. Throws an exception if the animal is not found.

### `main.cpp`

This file contains the `main` function that demonstrates the functionality of the pet shop system.

- **Functionality**:
  - Creates a `PetShop` object.
  - Adds `Dog` and `Cat` objects to the pet shop.
  - Displays all animals in the pet shop.
  - Finds an animal by name and makes it "speak."
  - Sells an animal by name and updates the list of animals.

## Compilation and Execution

To compile the project, use the following command:

```sh
g++ main.cpp Animalclass.cpp PetShop.cpp -o petshop
```
To run the project, use the following command:
```sh
./petshop
```
##Example Output:

Pets available in the shop:
Buddy (Age: 3, Price: $200)
Whiskers (Age: 2, Price: $150)
Max (Age: 5, Price: $300)
Found Whiskers: Meow! Meow!
Max has been sold.
After selling Max, remaining animals:
Pets available in the shop:
Buddy (Age: 3, Price: $200)
Whiskers (Age: 2, Price: $150)

