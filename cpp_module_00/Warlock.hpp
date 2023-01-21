#pragma once

#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string	name;
		std::string title;

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
};
