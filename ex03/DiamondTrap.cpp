#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), _name("default")
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap default constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap name constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap copy constructor called for " << _name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap copy assignment operator called for " << _name << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name
              << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}

