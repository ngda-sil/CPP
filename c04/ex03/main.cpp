#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(new Ice());
	
	Ice* tmp2 = new Ice();
	me->equip(tmp2);

	//IMateriaSource* src2 = new MateriaSource();

	ICharacter* you = new Character("youuuuuuuuuuuuuuuuuuu");

	you->equip(tmp);
	you->use(0, *you);
	you->unequip(0);
	//you->equip(tmp2);
	you->use(0, *you);

	ICharacter* bob = new Character("bob");
	
	//me->unequip(2);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);	
	me->use(12, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
