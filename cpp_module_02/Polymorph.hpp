#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell
{
	public:
		Polymorph();
		Polymorph	*clone() const;
};
