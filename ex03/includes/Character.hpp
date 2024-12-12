#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ground.hpp"

class	Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[4];
		Ground			*_ground;
	public:
		Character();
		Character(std::string name);
		Character(const Character &other);
		~Character();
		Character	&operator=(const Character &other);
		std::string const	&getName(void) const;
		void	setGround(Ground *ground);
		//Member functions
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int	idx, ICharacter	&target);
		int		checkClone(AMateria *materia);
};

#endif
