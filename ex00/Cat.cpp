//
// Created by aymeric on 19/08/23.
//

#include "Cat.hpp"

Cat::Cat() {
	Animal::type = "Cat";
	std::cout << "Cat create !" << std::endl;
}

Cat::~Cat() {
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