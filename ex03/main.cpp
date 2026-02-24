#include "DiamondTrap.hpp"

#include <iostream>

int main()
{
    std::cout << "Creating DiamondTrap..." << std::endl;
    DiamondTrap dt("Mario");

    std::cout << "\nTesting attack from ScavTrap:" << std::endl;
    dt.attack("a training dummy");

    std::cout << "\nTesting whoAmI:" << std::endl;
    dt.whoAmI();

    std::cout << "\nTesting inherited behaviors:" << std::endl;
    dt.takeDamage(30);
    dt.beRepaired(20);

    std::cout << "\nSpecial abilities from parents:" << std::endl;
    dt.highFivesGuys();
    dt.guardGate();

    std::cout << "\nConstruction/destruction chaining will be visible below." << std::endl;

    return 0;
}

