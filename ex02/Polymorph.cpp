#include "Polymorph.hpp"

Polymorph::Polymorph(){
	this->name = "Polymorph";
	this->effect = "turned into a critter";
}

Polymorph::~Polymorph(){
	
}

ASpell* Polymorph::clone(void) const{
	return (new Polymorph());
}