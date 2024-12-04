#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#define GREEN "\x1b[32m"
#define RESET "\001\x1b[0m\002"

class	Animal
{
	protected :
	std::string	_type;

	public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &other);
	virtual ~Animal();
	virtual Animal &operator=(const Animal &other);

	virtual void	makeSound(void) const;

	//getter
	std::string getType(void) const;
};

#endif
