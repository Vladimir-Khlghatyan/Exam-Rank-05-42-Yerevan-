#include "ASpell.hpp"

ASpell::ASpell() {} //code omitted

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects) {}

ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects) {}

ASpell &ASpell::operator=(const ASpell &rhs)
{
	if (this != &rhs)
	{
		this-> name = rhs.name;
		this->effects = rhs.effects;
	} 
	return *this;
}

ASpell::~ASpell() {}

const std::string	&ASpell::getName() const
{
	return (this->name);
}

const std::string	&ASpell::getEffects() const
{
	return (this->effects);
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
