#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *CatsAndDogs[4]; // or -->  = new Animal *[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			CatsAndDogs[i] = new Dog("Bone");
		}
		else
		{
			CatsAndDogs[i] = new Cat("Fish");
		}
	}
	for	(int i = 0; i < 100; i++)
		std::cout << (*(dynamic_cast<Dog *>(CatsAndDogs[0])->getBrain().getIdea(i))) << std::endl;
	for	(int i = 0; i < 100; i++)
		std::cout << (*(dynamic_cast<Cat *>(CatsAndDogs[1])->getBrain().getIdea(i))) << std::endl;

	//Deep copy
	
	Cat *Kitty = new Cat(*dynamic_cast<Cat *>(CatsAndDogs[1]));
	
	delete Kitty;

	for	(int i = 0; i < 100; i++)
		std::cout << (*(dynamic_cast<Dog *>(CatsAndDogs[0])->getBrain().getIdea(i))) << std::endl;

	for (int i = 0; i < 4; i++)
		delete CatsAndDogs[i];
	return (0);
}
//	for (int i = 0; i < 100; i++)
//		dynamic_cast<Dog *>(CatsAndDogs[0])->getBrain().setIdea(i, "Chicken");

