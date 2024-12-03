#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(std::string idea)
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain(std::string(idea));
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(other.getBrain());
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " : Moew Moew" << std::endl;
}

Brain	&Cat::getBrain(void) const
{
	return (*this->_brain);
}
