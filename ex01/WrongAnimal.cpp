//
// Created by aymeric on 19/08/23.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("random") {
	std::cout << "WrongAnimal create !" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal killed !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	*this = src;
	return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Random sound" << std::endl;
}