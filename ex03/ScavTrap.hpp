
#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavTrap);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap &scavTrap);

		void	guardGate(void) const;
		void	attack(const std::string &target);
};
