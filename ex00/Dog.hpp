//
// Created by aymeric on 19/08/23.
//

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
	Dog();
	~Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const & rhs);
	virtual void makeSound() const;
};


#endif //DOG_HPP
