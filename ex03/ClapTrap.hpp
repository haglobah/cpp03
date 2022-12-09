
#pragma once
#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_HP;
		int			_EP;
		int			_AD;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &clapTrap);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

void	println(std::string s);
void	printname(std::string name, std::string s);