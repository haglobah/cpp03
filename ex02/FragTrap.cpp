
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Scappy")
{
	_HP = 100;
	_EP = 100;
	_AD = 30;
	printname(_name, ": It's a FragTrap!");
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_HP = 100;
	_EP = 100;
	_AD = 30;
	printname(_name, ": It's the FragTrap!");
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	*this = fragTrap;
	printname(_name, ": It's THE FragTrap!");
}

FragTrap::~FragTrap(void)
{
	printname(_name,  ": (pure pain...)");
}



FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		this->_name = fragTrap._name;
		this->_HP = fragTrap._HP;
		this->_EP = fragTrap._EP;
		this->_AD = fragTrap._AD;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	printname(_name, " raises his hand for a high five.");
}

void	FragTrap::attack(const std::string &target) 
{
	if (_EP > 0 && _HP > 0)
	{
		std::cout << _name << ": 'I'll damage you, " << target << "!' (-" << _AD << "HP)" << std::endl;
		_EP -= 1;
	}
	else if (_EP > 0)
		printname(_name, " can't deal damage. He*she's dead.");
	else
		printname(_name, " deal damage. He*she's got no energy left.");
}
