#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
	Dog();
	Dog(const Dog &other);
	~Dog();
	Dog &operator=(const Dog &other);

	void	makeSound(void) const;
};

#endif
