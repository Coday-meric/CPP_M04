//
// Created by aymeric on 19/08/23.
//

#include "Animal.hpp"

Animal::Animal() : type("random") {
	std::cout << "Animal create !" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal killed !" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
	return;
}

Animal &Animal::operator=(const Animal &rhs) {
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Random sound" << std::endl;
}