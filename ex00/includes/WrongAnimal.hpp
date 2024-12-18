#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

class	WrongAnimal
{
	protected :
	std::string	_type;

	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);

	void	makeSound(void) const;

	//getter
	std::string getType(void) const;
};

#endif
