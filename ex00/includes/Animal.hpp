#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class	Animal
{
	protected :
	std::string	_type;

	public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();
	Animal &operator=(const Animal &other);

	virtual void	makeSound(void) const;

	//getter
	std::string getType(void) const;
};

#endif
