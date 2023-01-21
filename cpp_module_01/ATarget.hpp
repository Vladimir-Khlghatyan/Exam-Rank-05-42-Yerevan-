#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string	type;

	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &rhs);
		virtual ~ATarget();

	public:
		const std::string	&getType() const;
		virtual ATarget		*clone() const = 0;
		void				getHitBySpell(const ASpell &spell) const;
};
