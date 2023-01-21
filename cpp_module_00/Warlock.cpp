#include "Warlock.hpp"

Warlock::Warlock() {} //code omitted

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &other) {(void)&other;} //code omitted

Warlock &Warlock::operator=(const Warlock &rhs) {(void)&rhs; return *this;} //code omitted

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string	&Warlock::getName() const
{
	return (this->name);
}

const std::string	&Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}
