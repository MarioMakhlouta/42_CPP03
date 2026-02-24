#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
    std::cout << "Creating ClapTrap and ScavTrap..." << std::endl;
    ClapTrap base("Base");
    ScavTrap guard("Guardian");

    std::cout << "\nTesting attacks:" << std::endl;
    base.attack("a random target");
    guard.attack("an intruder");

    std::cout << "\nTesting damage and repairs:" << std::endl;
    guard.takeDamage(30);
    guard.beRepaired(20);

    std::cout << "\nTesting special ability:" << std::endl;
    guard.guardGate();

    std::cout << "\nConstruction/destruction chaining will be visible below." << std::endl;

    return 0;
}

