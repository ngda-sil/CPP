#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	H = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		H[i].setName(name/*.append(" I")*/);
	return (H);
}
