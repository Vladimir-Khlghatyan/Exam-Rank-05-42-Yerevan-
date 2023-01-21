#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell
{
	public:
		Fireball();
		Fireball	*clone() const;
};
