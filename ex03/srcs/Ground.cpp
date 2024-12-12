#include "Ground.hpp"
#include <iostream>

Ground::Ground() : _capacity(1), _ground(new AMateria *[_capacity])
{
	std::cout << "Ground default constructor called" << std::endl;
	_ground[0] = NULL;
}

Ground::Ground(const Ground &other) : _ground(NULL)
{
	*this = other;
}

Ground	&Ground::operator=(const Ground &other)
{
	if (this != &other)
	{
		this->_capacity = other._capacity;
		this->deleteGround();
		this->_ground = new AMateria *[this->_capacity];
		for (int i = 0; i < this->_capacity - 1; i++)
		{
			this->_ground[i] = other._ground[i];
		}
	}
	return (*this);
}

Ground::~Ground()
{
	std::cout << "Ground Destructor called" << std::endl;
	this->deleteGround();
}

void	Ground::deleteGround(void)
{
	if (this->_ground)
	{
		for (int i = 0; i < this->_capacity - 1; i++)
		{
			if (this->_ground[i] != NULL)
			{
				delete this->_ground[i];
			}
		}
		delete[] this->_ground;
		this->_ground = NULL;
	}
}

void	Ground::putOnGround(AMateria *materia)
{
	for (int i = 0; i < this->_capacity - 1; i++)
	{
		if (this->_ground[i] == NULL)
		{
			this->_ground[i] = materia;
			return ;
		}
	}
	int		i;
	this->_capacity++;
	AMateria	**newGround = new AMateria *[this->_capacity];
	i = 0;
	while (i < this->_capacity - 1)
	{
		newGround[i] = this->_ground[i];
		i++;
	}
	newGround[i] = materia;
	this->deleteGround();
	this->_ground = newGround;
}
