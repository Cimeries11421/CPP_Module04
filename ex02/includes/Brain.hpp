#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class	Brain
{
	private :
	std::string	_ideas[100];

	public:
	Brain();
	Brain(std::string idea);
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &other);

	//getter
	const std::string *getIdea(int i) const;
	void	setIdea(int i, std::string idea);
};

#endif
