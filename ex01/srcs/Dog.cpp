#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const std::string &idea) : Animal("Dog")
{
	std::cout << "Dog Parameterized constructor called" << std::endl;
	this->_brain = new Brain (std::string(idea)); //not in init for order
}

Dog::Dog(const Dog &other) : Animal(other), _brain(NULL)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
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

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " : Moew Moew" << std::endl;
}

Brain	&Dog::getBrain(void) const
{
	return (*this->_brain);
}
