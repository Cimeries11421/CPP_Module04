#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include "ICharacter.hpp"

class	AMateria
{
	protected:
	std::string	_type;
	
	public:
	//constructor
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &other);

	//destructor
	virtual	~AMateria() = 0;

	//operator overload
	AMateria &operator=(const AMateria &other);

	//getter
	std::string const	&getType() const;

	//Member functions
	virtual			AMateria *clone() const = 0;
	virtual void	use(ICharacter &target);
};

#endif
