#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private :
	Brain	*_brain;

	public:
	Dog();
	Dog(const std::string &idea);
	Dog(const Dog &other);
	~Dog();
	Dog &operator=(const Dog &other);

	void	makeSound(void) const;
	
	//Getter
	Brain	&getBrain(void) const;
};


#endif
