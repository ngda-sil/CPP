#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {}

		virtual	std::string getCopyType(void) = 0;

		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &rhs);
		MateriaSource& operator=(const MateriaSource& rhs);
		~MateriaSource(void);

		std::string getCopyType(void);
		
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	
	private:
		AMateria* _copy[4];
};

#endif
