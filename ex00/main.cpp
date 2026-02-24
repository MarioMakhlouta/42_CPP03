#include "ClapTrap.hpp"

#include <iostream>

int main()
{
    ClapTrap a("Mario");
    ClapTrap b("Bowser");

    a.attack("Bowser");
    b.takeDamage(0);

    b.attack("Mario");
    a.takeDamage(5);

    a.beRepaired(3);
    a.attack("Bowser");
    b.takeDamage(8);

    // Exhaust energy points
    for (int i = 0; i < 12; ++i)
        a.attack("Dummy target");

    // Take more damage than remaining hit points
    b.takeDamage(100);
    b.attack("Mario");
    b.beRepaired(10);

    return 0;
}

