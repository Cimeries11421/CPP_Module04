#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type("AMateria")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria Parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : _type(other._type)
{	
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria use on " << target.getName() << std::endl;
}
