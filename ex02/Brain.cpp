//
// Created by aymeric on 19/08/23.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain create !" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain killed !" << std::endl;
}

Brain::Brain(const Brain &src) {
	*this = src;
	return;
}

Brain &Brain::operator=(const Brain &rhs) {
	if (this != &rhs)
	{
		for ( int i = 0; i < 100; i++ ) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}