#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
	public:
		Dummy();
		Dummy	*clone() const;
};
