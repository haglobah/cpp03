
#include "ScavTrap.hpp"

int	main(void)
{
	{
		ClapTrap	clapTrap("Clappy");
		ScavTrap	scavTrap;
		
		scavTrap.attack("random human");
		clapTrap.attack("random human");
		scavTrap.guardGate();
		scavTrap.takeDamage(30);
		scavTrap.beRepaired(10);
		scavTrap.takeDamage(50);
		scavTrap.takeDamage(30);
		scavTrap.takeDamage(10);
		scavTrap.beRepaired(1);
		scavTrap.attack("Clappy");
	}
	{
		ScavTrap	scavTrap("Scavvy");

		for (int i = 0; i < 50; i++)
			scavTrap.attack("random human");
		scavTrap.beRepaired(10);
		scavTrap.attack("random human");
		scavTrap.takeDamage(100);
	}
	return (0);
}