#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {} //code omitted

TargetGenerator::TargetGenerator(const TargetGenerator &other) {(void)&other;} //code omitted

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &rhs) {(void)&rhs; return *this;} //code omitted

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); ++it)
		delete *it;
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); ++it)
		if ((*it)->getType() == target->getType())
			return ;
	this->targets.push_back(target->clone());
		
}

void	TargetGenerator::forgetTargetType(std::string const &targetType)
{
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); ++it)
	{
		if ((*it)->getType() == targetType)
		{
			delete *it;
			this->targets.erase(it);
			return ;
		}
	}
}

ATarget	*TargetGenerator::createTarget(std::string const &targetType)
{
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); ++it)
		if ((*it)->getType() == targetType)
			return ((*it)->clone());
	return (NULL);
}
