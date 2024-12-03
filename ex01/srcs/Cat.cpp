#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain)
{
	std::cout << "Cat Default constructor called" << std::endl;
	// this->_type = "Cat";
	// this->_brain = new Brain();
}

Cat::Cat(std::string idea) : Animal("Cat"), _brain(new Brain(std::string(idea)))
{
	std::cout << "Cat Parameteric constructor called" << std::endl;
	// this->_type = "Cat";
	// this->_brain = new Brain(std::string(idea));
}

Cat::Cat(const Cat &other) : Animal(other), _brain(NULL)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	// (void)other;
	*this = other;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
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
