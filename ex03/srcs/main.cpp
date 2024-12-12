#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ground.hpp"
#include <iostream>

int main(void)
{
	//peut pas utiliser une classe abtraite dans la stack, mais on peut utiliser un pointeur
	//Toutes les fonctions abtraite doivent etre redefinis sinon pas de compilation, l'interface 
	//force la redefinition des fonctions dans l'interface
/*	Ground			*ground = new Ground();
	AMateria		*ice	= new Ice();
	AMateria		*cure	= new Cure();
	IMateriaSource	*src	= new MateriaSource();
	ICharacter		*WOL	= new Character("G'raha tia");
	ICharacter		*NPC	= new Character;


	dynamic_cast<Character *>(WOL)->setGround(ground);
	src->learnMateria(ice);
	src->learnMateria(cure);

	AMateria	*iceCreated = src->createMateria("ice");
	AMateria	*cureCreated = src->createMateria("cure");


	WOL->equip(iceCreated);
	WOL->equip(cureCreated);
	WOL->use(0, *NPC);
	WOL->use(1, *NPC);

	WOL->unequip(0);
	WOL->use(0, *NPC);
	WOL->equip(iceCreated);
	WOL->use(0, *NPC);

	delete	ground;
	delete	src;
	delete	WOL;
	delete	NPC;

	return (0);*/

		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
		return 0;
}
