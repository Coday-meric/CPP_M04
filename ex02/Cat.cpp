//
// Created by aymeric on 19/08/23.
//

#include "Cat.hpp"

Cat::Cat() {
	Animal::type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat create !" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat killed !" << std::endl;
}

Cat::Cat(const Cat &src) {
	*this = src;
	return;
}

Cat &Cat::operator=(const Cat &rhs) {
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miaou Miaou" << std::endl;
}