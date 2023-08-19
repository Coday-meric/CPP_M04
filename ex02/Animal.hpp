//
// Created by aymeric on 19/08/23.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(Animal const &src);
	Animal & operator=(Animal const & rhs);
	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif //ANIMAL_HPP
