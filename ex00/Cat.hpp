//
// Created by aymeric on 19/08/23.
//

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
public:
	Cat();
	~Cat();
	Cat(Cat const &src);
	Cat & operator=(Cat const & rhs);
	virtual void makeSound() const;
};

#endif //CAT_HPP
