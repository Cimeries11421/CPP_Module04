#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	 Cat	*Ori = new Cat("Fish");
	 Cat	*Milo = new Cat("Chicken");

	for	(int i = 0; i < 100; i++)
	{
		std::cout << (*Ori->getBrain().getIdea(i)) << std::endl;
		std::cout << (*Milo->getBrain().getIdea(i)) << std::endl;
	}

	Milo = Ori;
	std::cout << "\n " << std::endl;
	for	(int i = 0; i < 100; i++)
	{
		std::cout << (*Ori->getBrain().getIdea(i)) << std::endl;
		std::cout << (*Milo->getBrain().getIdea(i)) << std::endl;
	}
	delete Ori;
	delete Milo;
}
