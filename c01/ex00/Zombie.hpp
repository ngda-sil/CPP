#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		/*Zombie(const Zombie &a);
		Zombie & operator=(const Zombie &a);
*/
		void	announce(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);

	private:
		std::string	_name;
};

#endif
