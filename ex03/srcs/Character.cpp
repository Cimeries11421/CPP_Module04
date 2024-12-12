#include "Character.hpp"
#include <iostream>

Character::Character() : _name("PNJ")
{
	std::cout << "A PNJ is born" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string name) : _name(name)
{
	std::cout << "A Warrior of light is born" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &other) : _name(other._name)
{
	*this = other;
}

Character::~Character()
{
	std::cout << this->_name << " is dead" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (other._inventory[i] != NULL)
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}


void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->checkClone(materia) == 1)
			return ;
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			return ;
		}
	}
	std::cout << "Inventory is full\n" << std::endl;
}

void	Character::unequip(int i)
{
	if (i >= 0 && i < 4)
	{
		if (this->_inventory[i] != NULL)
		{
			this->_ground->putOnGround(this->_inventory[i]);
			this->_inventory[i] = NULL;
		}
		else
			std::cout << "This slot is empty" << std::endl;
	}
	else
	{
		std::cout << "There is no slot " << i << " in the inventory\n"
		<< "Enter : 0, 1, 2, 3" << std::endl;
	}
}

void	Character::use(int i, ICharacter &target)
{
	if (i < 0 || i > 3)
	{
		std::cout << "There is no slot " << i << " in the inventory\n"
		<< " > Enter : 0, 1, 2, 3" << std::endl;
	}
	else if (this->_inventory[i] != NULL)
	{
		std::cout << this->_name << std::flush;
		this->_inventory[i]->use(target);
	}
	else
	{
		std::cout << "There is no materia in slot " << i << " in the inventory" << std::endl;
	}	
}

int		Character::checkClone(AMateria *materia)
{
	if (materia == NULL)
	{
		std::cout << "This is not a materia" << std::endl;
		return (1);
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == materia)
		{
			std::cout << "This materia is already in the inventory" << std::endl;
			return (1);
		}
	}
	return (0);
}

void	Character::setGround(Ground *ground)
{
	this->_ground = ground;
}
