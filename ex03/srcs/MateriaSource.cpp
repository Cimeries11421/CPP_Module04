#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_tab[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource Copy destructor" << std::endl;
	*this = other;
}

MateriaSource	MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_tab[i] != NULL)
				delete this->_tab[i];
			if (other._tab[i] != NULL)
				this->_tab[i] = other._tab[i]->clone();
			else
				this->_tab[i] = NULL;
	}
	return (*this);
}
