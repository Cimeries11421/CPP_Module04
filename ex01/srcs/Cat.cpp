#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const std::string &idea) : Animal("Cat")
{
	std::cout << "Cat Parameterized constructor called" << std::endl;
	this->_brain = new Brain (std::string(idea)); //not in init for order
}

Cat::Cat(const Cat &other) : Animal(other), _brain(NULL)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{

	std::cout << "ENFANT" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
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
