#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		/*Zombie(const Zombie &a);
		Zombie & operator=(const Zombie &a);*/
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
