#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int main(void)
{
	AMateria	*materia = new Cure();

	std::cout << materia->getType() << std::endl;
}
