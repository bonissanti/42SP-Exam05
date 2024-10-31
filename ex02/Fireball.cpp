#include "Fireball.hpp"

Fireball::Fireball(){
	this->name = "Fireball";
	this->effect = "burnt to a crisp";
}

Fireball::~Fireball(){
	
}

ASpell* Fireball::clone(void) const{
	return (new Fireball());
}