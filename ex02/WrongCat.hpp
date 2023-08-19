//
// Created by aymeric on 19/08/23.
//

#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat & operator=(WrongCat const & rhs);
	void makeSound() const;
};

#endif //WrongCat_HPP
