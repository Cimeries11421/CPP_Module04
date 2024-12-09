#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("Ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other._type)
{	
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Materia have been destroyed" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{ 
	AMateria::operator=(other);
	return (*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *"  << std::endl;
}

Ice	*Ice::clone(void) const
{
	Ice	*cloneIce = new Ice();
	return (cloneIce);
}
