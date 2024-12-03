#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Nothing";
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain Parameterizd constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

const std::string	*Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
	{
		return (&this->_ideas[i]);
	}
	else
		std::cout << "Index invalid" << std::endl;
	return (NULL);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
	{
		this->_ideas[i] = idea;
	}
	else
		std::cout << "Index invalid" << std::endl;
}
