#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[4];
		int				_capacity;
		AMateria		**_ground;
	public:
		//construtors
		Character();
		Character(std::string name);
		Character(const Character &other);
		//destructors
		~Character();
		//operator overload
		Character	&operator=(const Character &other);
		//Getter
		std::string const	&getName(void) const;
		//Member functions
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int	idx, ICharacter	&target);
		int		checkClone(AMateria *materia);
		void	putOnGround(AMateria *materia);
};

#endif
