#ifndef CURE_H
#define CURE_H

#include <string>
#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
	//constructor
	Cure();
	Cure(std::string const &type);
	Cure(const Cure &other);

	//destructor
	~Cure();

	//operator overload
	Cure &operator=(const Cure &other);

	//getter
	std::string const	&getType(void) const;

	//Member functions
	Cure	*clone(void) const;
	void	use(ICharacter &target);
};

#endif
