
#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		DiamondTrap(void);
		
	public:
		DiamondTrap(const DiamondTrap &diamondTrap);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap	&operator=(const DiamondTrap &diamondTrap);

		void	whoAmI(void) const;
		using	ScavTrap::attack;
};
