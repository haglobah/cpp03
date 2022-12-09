#include "ClapTrap.hpp"

void	println(std::string s)
{
	std::cout << s << std::endl;
}

void	printname(std::string name, std::string s)
{
	std::cout << name;
	println(s);
}

// CONSTRUCTORS AND DESTRUCTOR

ClapTrap::ClapTrap(void) : _name("Clappy"), _HP(10), _EP(10), _AD(0)
{
	printname(_name, ": Hi! (from void)");
}
ClapTrap::ClapTrap(const ClapTrap &clapTrap){ printname(_name, ": Hey! (from someone else)");
	*this = clapTrap;
}
ClapTrap::ClapTrap(std::string name) : _HP(10), _EP(10), _AD(0)
{
	_name = name;
	printname(_name, ": Hoho! (from myself)");
}
ClapTrap::~ClapTrap(void){printname(_name, ": ByebaaaAAAHHH! ");}
ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	if (this != &clapTrap)
	{
		_name = clapTrap._name;
		_HP = clapTrap._HP;
		_EP = clapTrap._EP;
		_AD = clapTrap._AD;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) 
{
	if (_EP > 0 && _HP > 0)
	{
		std::cout << _name << " attacks " << target << "! (-" << _AD << "HP)" << std::endl;
		_EP -= 1;
	}
	else if (_EP > 0)
		printname(_name, " cannot attack. He*she's dead.");
	else
		printname(_name, " cannot attack. He*she has no EP left.");
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP > 0)
	{
		std::cout << _name << " has taken damage. " << "(-" << amount << "HP)" << std::endl;
		_HP = std::max(_HP - (int)amount, 0);
		if (_HP == 0)
			printname(_name, " has died.");
	}
	else
		printname(_name, " is already dead.");
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_EP > 0 && _HP > 0)
	{
		std::cout << _name << " has repaired itself! (+" << amount << "HP)"<< std::endl;
		_HP += amount;
		_EP -= 1;
	}
	else if (_EP > 0)
		printname(_name, " cannot repair itself. He*she's dead.");
	else
		printname(_name, " cannot repair itself. He*she's got no Energy left.");
}

