//
// Created by aymeric on 19/08/23.
//

#include "Dog.hpp"

Dog::Dog() {
	Animal::type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog create !" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog killed !" << std::endl;
}

Dog::Dog(const Dog &src) {
	*this = src;
	return;
}

Dog &Dog::operator=(const Dog &rhs) {
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Wouaf Wouaf" << std::endl;
}