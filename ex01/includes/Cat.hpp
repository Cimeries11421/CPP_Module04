#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private :
	Brain	*_brain;

	public:
	Cat();
	Cat(std::string idea);
	Cat(const Cat &other);
	~Cat();
	Cat &operator=(const Cat &other);

	void	makeSound(void) const;
	
	//Getter
	Brain	&getBrain(void) const;
};

#endif
