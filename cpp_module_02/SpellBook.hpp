#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class SpellBook
{
	private:
		std::vector<ASpell*> spells;

	public:
		SpellBook();
	private:
		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &rhs);
	public:
		~SpellBook();

	public:
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const &spellName);
		ASpell	*createSpell(std::string const &spellName);
};
