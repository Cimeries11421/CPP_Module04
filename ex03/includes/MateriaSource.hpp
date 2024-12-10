#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	private :
		AMateria		*_source[4];
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(const	MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);
		void	learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};

#endif
