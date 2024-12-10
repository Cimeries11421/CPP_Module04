#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other._type)
{	
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Materia have been destroyed" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{ 
	AMateria::operator=(other);
	return (*this);
}

/*std::string const	&Cure::getType(void) const
{
	return (this->_type);
}*/

void	Cure::use(ICharacter &target)
{
	std::cout << " * heals " << target.getName()<< "'s wounds *" << std::endl;
}

Cure	*Cure::clone(void) const
{
	Cure	*cloneCure = new Cure();
	return (cloneCure);
}
