#include "Character.hpp"
#include <iostream>

Character::Character() : _name("PNJ")
{
	std::cout << "A PNJ is born" << std::endl;
	this->_inventory = new AMateria[4];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string name) : _name(name)
{
	std::cout << "A Warrior of light is born" << std::endl;
}

Character::Character(const Character &other) : _name(other._name)
{
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		//for (int i = 0; i < 4; i++)
		//	this->_inventory[i]. = other._inventory[i].get;
	}
}

/*void	Character::use(int idx, Character &target)
{
	(*this->_inventory[idx])->use(target);
}*/
// GET MATERIA ?? 
