
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : 
	ClapTrap(), ScavTrap(), FragTrap()
{
	printname(_name, ": a diamond exists!");
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) :
	ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	*this = diamondTrap;
	printname(_name, ": a Diamond exists!");
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name")
{
	_name = name;
	_HP = FragTrap::_HP;
	_EP = ScavTrap::_EP;
	_AD = FragTrap::_AD;
	printname(_name, ": a DiamondTrap exists!");
}

DiamondTrap::~DiamondTrap(void)
{
	printname(_name, ": Time to pack my things and go!");
}


DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	if (this != &diamondTrap)
	{
		_name = diamondTrap._name;
		_HP = diamondTrap._HP;
		_EP = diamondTrap._EP;
		_AD = diamondTrap._AD;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << _name << " and my clapName " << ClapTrap::_name << "!" << std::endl;
}
