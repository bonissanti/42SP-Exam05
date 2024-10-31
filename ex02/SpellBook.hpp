#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include "ASpell.hpp"

class ASpell;

class SpellBook{
	private:
	
		SpellBook(const SpellBook& toCopy);
		SpellBook& operator=(const SpellBook& toCopy);
		
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(const std::string& spell);
		ASpell* createSpell(const std::string& spellName);
};

#endif