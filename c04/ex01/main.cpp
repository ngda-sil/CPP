#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	{
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();
		
		delete j;
		delete i;
	}
	std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;
	{
		Dog	Medor;
		Dog	Bethoveen;

		std::cout << "Beth	:		"; Bethoveen.setIdea(500, "idfaajdi");
		std::cout << "Beth	:		"; Bethoveen.getIdea(500);
		
		Medor.setIdea(0, "Eureka");
		std::cout << "Medor	:		"; Medor.getIdea(0);
	
		Dog Paf(Medor);

		std::cout << "Paf	:		"; Paf.getIdea(0);
		Paf.setIdea(0, "Nevermind, there is a segfault");
		std::cout << "Paf	:		"; Paf.getIdea(0);
		std::cout << "Medor	:		"; Medor.getIdea(0);
	}
	std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;
	{
		int	i = 0;
		Animal*	tab[4];

		while (i < 4)
		{
			std::cout << i << std::endl;
			if (i < 2)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
			i++;
		}
		std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;
		for (int j=0; j<4; j++)
			delete tab [j];
	}
	std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;
	{
		Cat Jean;

		Jean.setIdea(0, "Deep Copie or not ?");
		{
			Cat Marie;
			
			std::cout << "Jean	:		"; Jean.getIdea(0);
			std::cout << "Marie	:		"; Marie.getIdea(0);
			Marie = Jean;
			std::cout << "Marie	:		"; Marie.getIdea(0);
			Jean.setIdea(0, "I think it is a deep copy");
			std::cout << "Jean 	: changed one of is idea" << std::endl;
			std::cout << "Marie	:		"; Marie.getIdea(0);
			std::cout << "Jean	:		"; Jean.getIdea(0);
		}
	}
	return (0);
}
