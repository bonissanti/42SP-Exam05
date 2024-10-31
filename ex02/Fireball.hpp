#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell{
	public:
		Fireball();
		~Fireball();
		ASpell* clone(void) const;
};

#endif