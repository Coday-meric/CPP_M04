//
// Created by aymeric on 19/08/23.
//

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal & operator=(WrongAnimal const & rhs);
	std::string getType() const;
	void makeSound() const;
};

#endif //WrongAnimal_HPP
