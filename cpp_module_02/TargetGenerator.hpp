#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class TargetGenerator
{
	private:
		std::vector<ATarget*> targets;
		

	public:
		TargetGenerator();
	private:
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &rhs);
	public:
		~TargetGenerator();

	public:
		void	learnTargetType(ATarget* target);
		void	forgetTargetType(std::string const &targetType);
  		ATarget	*createTarget(std::string const &targetType);
};
