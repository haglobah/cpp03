
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Scappy")
{
	_HP = 100;
	_EP = 50;
	_AD = 20;
	printname(_name, ": But I'm a ScavTrap!");
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_HP = 100;
	_EP = 50;
	_AD = 20;
	printname(_name, ": But I'm the ScavTrap!");
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	*this = scavTrap;
	printname(_name, ": But I'm THE ScavTrap!");
}

ScavTrap::~ScavTrap(void)
{
	printname(_name,  ": (tears...)");
}



ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_HP = scavTrap._HP;
		this->_EP = scavTrap._EP;
		this->_AD = scavTrap._AD;
	}
	return (*this);
}

void	ScavTrap::guardGate(void) const
{
	printname(_name, " guards the gate.");
}

void	ScavTrap::attack(const std::string &target) 
{
	if (_EP > 0 && _HP > 0)
	{
		std::cout << _name << ": 'I'll damage you, " << target << "!' (-" << _AD << "HP)" << std::endl;
		_EP -= 1;
	}
	else if (_EP > 0)
		printname(_name, " can't deal damage. He*she's dead.");
	else
		printname(_name, " can't deal damage. He*she's got no energy left.");
}
