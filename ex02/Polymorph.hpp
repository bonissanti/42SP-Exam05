#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell{
	public:
		Polymorph();
		~Polymorph();
		ASpell* clone(void) const;
};

#endif