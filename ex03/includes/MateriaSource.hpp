#ifndef MATERIASOURCE
#define MATERIASOURCE

class	MateriaSource
{
	private :
		AMateria		*_tab[4];
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(const	MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);
		void	learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};

#endif
