#ifndef ICE_H
#define ICE_H

#include <string>
#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
	//constructor
	Ice();
	Ice(std::string const &type);
	Ice(const Ice &other);

	//destructor
	~Ice();

	//operator overload
	Ice &operator=(const Ice &other);

	//getter
	std::string const	&getType(void) const;

	//Member functions
	Ice	*clone(void) const;
	void	use(ICharacter &target);
};

#endif
