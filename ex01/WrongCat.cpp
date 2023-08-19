//
// Created by aymeric on 19/08/23.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat create !" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat killed !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
	*this = src;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Miaou Miaou" << std::endl;
}