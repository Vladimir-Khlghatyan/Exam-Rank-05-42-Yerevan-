#include "ATarget.hpp"

ATarget::ATarget() {} //code omitted

ATarget::ATarget(std::string const &type) : type(type) {}

ATarget::ATarget(const ATarget &other) : type(other.type) {}

ATarget &ATarget::operator=(const ATarget &rhs)
{
	if (this != &rhs)
		this-> type = rhs.type;
	return *this;
}

ATarget::~ATarget() {}

const std::string	&ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}