
#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragTrap);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &fragTrap);

		void	highFivesGuys(void) const;
		void	attack(const std::string &target);
};
