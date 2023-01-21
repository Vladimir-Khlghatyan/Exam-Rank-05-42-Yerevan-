#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string	name;
		std::string effects;

	public:
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &rhs);
		virtual ~ASpell();

	public:
		const std::string	&getName() const;
		const std::string	&getEffects() const;
		virtual ASpell		*clone() const = 0;
		void				launch(const ATarget &target) const;
};
