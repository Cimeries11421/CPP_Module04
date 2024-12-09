#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include <iostream>

int main(void)
{
	//peut pas utiliser une classe abtraite dans la stack, mais on peut utiliser un pointeur
	//Toutes les fonctions abtraite doivent etre redefinis sinon pas de compilation
	AMateria	*ice	= new Ice();
	AMateria	*cure	= new Cure();
	AMateria	*cure2	= new Cure();
	ICharacter	*WOL	= new Character("G'raha tia");
	ICharacter	*NPC	= new Character;
	
	WOL->equip(ice);
	WOL->equip(cure);
	WOL->equip(cure2);
	WOL->equip(cure);
	WOL->equip(cure);
	WOL->use(0, *NPC);
	WOL->use(1, *NPC);
	WOL->use(2, *NPC);
	WOL->use(6, *NPC);

	ICharacter	*copy = new Character(*dynamic_cast <Character *>(WOL));
		
	
	
	//Character	*test = new Character();
	//Character	*test2 = new Character(*test);

	copy->use(0, *NPC);
	copy->use(0, *NPC);
	copy->use(0, *NPC);
	copy->use(0, *NPC);
	copy->use(0, *NPC);
	copy->use(0, *NPC);
	copy->use(1, *NPC);
	copy->use(2, *NPC);

}
