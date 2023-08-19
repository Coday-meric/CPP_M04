//
// Created by aymeric on 19/08/23.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	~Brain();
	Brain(Brain const &src);
	Brain & operator=(Brain const & rhs);
};


#endif //BRAIN_HPP
