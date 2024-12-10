#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
			delete this->_source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource Copy destructor" << std::endl;
	*this = other;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_source[i] != NULL)
				delete this->_source[i];
			if (other._source[i] != NULL)
				this->_source[i] = other._source[i]->clone();
			else
				this->_source[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[3] != NULL)
		{
			std::cout << "MateriaSource is full" << std::endl;
		}
		if (this->_source[i] == NULL)
		{
			this->_source[i] = materia;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*newMateria;

	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL && this->_source[i]->getType() == type)
		{
			newMateria = this->_source[i]->clone();
			return (newMateria);
		}
	}
	std::cout << "No materia of this type" << std::endl;
	return (NULL);
}
