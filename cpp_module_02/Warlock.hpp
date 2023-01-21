#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock
{
	private:
		std::string	name;
		std::string	title;
		SpellBook	spellBook;

	private:
		Warlock();
	public:
		Warlock(std::string const &name, std::string const &title);
	private:
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &rhs);
	public:
		~Warlock();

	public:
		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void				setTitle(std::string const &title);
		void				introduce() const;

	public:
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const &spellName);
		void	launchSpell(std::string const &spellName,const ATarget &target);
};
