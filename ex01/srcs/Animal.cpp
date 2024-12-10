#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal Parameter constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << this->_type << "Make a sound" << std::endl;
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}
