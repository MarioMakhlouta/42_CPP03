#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int main()
{
    std::cout << "Creating ScavTrap and FragTrap..." << std::endl;
    ScavTrap scav("Guardian");
    FragTrap frag("Blaster");

    std::cout << "\nTesting attacks:" << std::endl;
    scav.attack("a trespasser");
    frag.attack("a boss");

    std::cout << "\nTesting damage and repairs:" << std::endl;
    scav.takeDamage(40);
    scav.beRepaired(20);
    frag.takeDamage(60);
    frag.beRepaired(40);

    std::cout << "\nTesting special abilities:" << std::endl;
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "\nConstruction/destruction chaining will be visible below." << std::endl;

    return 0;
}

