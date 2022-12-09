
#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap	clapTrap1("The Clap");
		ClapTrap	clapTrap2("Trappy");
		ClapTrap	clapTrap3;

		clapTrap3 = clapTrap1;
		clapTrap2.attack("random human");
		clapTrap1.takeDamage(5);
		clapTrap1.takeDamage(3);
		clapTrap1.beRepaired(10);
		clapTrap1.takeDamage(50);
		clapTrap1.beRepaired(100);
		clapTrap1.takeDamage(50);
		clapTrap1.attack("random human");
	}
	{
		ClapTrap	clapTrap1;

		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.beRepaired(1);
		clapTrap1.beRepaired(1);
		clapTrap1.beRepaired(1);
		clapTrap1.beRepaired(1);
		// no energy left
		clapTrap1.beRepaired(1);
		clapTrap1.attack("random human");
		clapTrap1.takeDamage(10);
	}
	return (0);
}