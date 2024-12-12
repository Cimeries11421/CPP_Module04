#ifndef GROUND_H
#define GROUND_H

#include "AMateria.hpp"

class	Ground
{
	private :
		int			_capacity;
		AMateria	**_ground;
	public :
		Ground();
		Ground(const Ground &other);
		Ground	&operator=(const Ground &other);
		~Ground();

		//Member functions 
		void	deleteGround(void);
		void	putOnGround(AMateria *materia);
};

#endif
