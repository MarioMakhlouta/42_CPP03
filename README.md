*This project has been created as part of the 42 curriculum by mmakhlou.*

## Description

This repository contains my implementation of **CPP Module 03 – Inheritance** from the 42 C++ modules (CPPmodules - CPP03 - Milestone04).  
The goal of this module is to practice object-oriented programming in C++98, focusing on single and multiple inheritance, constructor/destructor chaining, and the Orthodox Canonical Form.  

The project is split into four independent exercises:
- **ex00 – Aaaaand... OPEN!**: Implements the `ClapTrap` class with basic combat-like behavior (attack, take damage, repair).
- **ex01 – Serena, my love!**: Introduces `ScavTrap`, a class derived from `ClapTrap` with updated stats and a special `guardGate()` mode.
- **ex02 – Repetitive work**: Adds `FragTrap`, another `ClapTrap` descendant with its own stats and a `highFivesGuys()` special ability.
- **ex03 – Now it’s weird!**: Implements `DiamondTrap`, a multiple-inheritance hybrid of `ScavTrap` and `FragTrap` that manages the diamond-shaped inheritance from `ClapTrap` and provides `whoAmI()`.

Each exercise directory is self-contained with its own `Makefile`, headers, sources, and a simple `main.cpp` used for manual testing and to demonstrate construction/destruction order.

## Instructions

- **Requirements**
  - C++ compiler supporting the C++98 standard (e.g. `c++` / `clang++` / `g++`).
  - The code must be compiled with the flags: `-Wall -Wextra -Werror -std=c++98`.

- **Directories and structure**
  - `ex00/`: `Makefile`, `main.cpp`, `ClapTrap.hpp`, `ClapTrap.cpp`
  - `ex01/`: `Makefile`, `main.cpp`, `ClapTrap.hpp`, `ClapTrap.cpp`, `ScavTrap.hpp`, `ScavTrap.cpp`
  - `ex02/`: `Makefile`, `main.cpp`, `ClapTrap.hpp`, `ClapTrap.cpp`, `ScavTrap.hpp`, `ScavTrap.cpp`, `FragTrap.hpp`, `FragTrap.cpp`
  - `ex03/`: `Makefile`, `main.cpp`, `ClapTrap.hpp`, `ClapTrap.cpp`, `ScavTrap.hpp`, `ScavTrap.cpp`, `FragTrap.hpp`, `FragTrap.cpp`, `DiamondTrap.hpp`, `DiamondTrap.cpp`

- **Build**
  - From inside a given exercise directory, run:
    - `make` – builds the corresponding exercise executable (`ClapTrap`, `ScavTrap`, `FragTrap`, or `DiamondTrap`).
    - `make clean` – removes object files.
    - `make fclean` – removes object files and the executable.
    - `make re` – full rebuild.

- **Run**
  - After building, execute the binary from the exercise directory, for example:
    - `./ClapTrap` in `ex00/`
    - `./ScavTrap` in `ex01/`
    - `./FragTrap` in `ex02/`
    - `./DiamondTrap` in `ex03/`
  - Each `main.cpp` showcases the required behaviors:
    - Attacking, taking damage, and repairing.
    - Special abilities (`guardGate`, `highFivesGuys`, `whoAmI`).
    - Constructor and destructor call order for inheritance.

## Resources

- **Documentation / Articles**
  - C++98 language reference (e.g. cppreference C++98 pages).
  - Tutorials on basic C++ OOP (classes, constructors, destructors, inheritance).
  - Articles explaining:
    - Single vs. multiple inheritance.
    - Diamond inheritance problems and virtual inheritance.
    - The Orthodox Canonical Form (default constructor, copy constructor, copy assignment operator, destructor).

- **42-specific**
  - Official 42 subject for **CPP Module 03 – Inheritance**.
  - 42 intranet resources and FAQs about the C++ modules and AI usage.

- **AI usage**
  - AI (Cursor / ChatGPT-like assistant) was used as a **coding assistant** for:
    - Parsing the official subject PDF and restating the requirements (files, directories, class names, behaviors).
    - Generating initial boilerplate for:
      - Class declarations and canonical form.
      - Method implementations that follow the subject constraints (no forbidden functions, C++98, no STL except where allowed).
      - Simple `main.cpp` test drivers and 42-style `Makefile`s for each exercise.
    - Drafting this `README.md` structure and wording, including the required sections and AI-disclosure.
  - All generated code and explanations were **reviewed and are meant to be understood by me (Mario Makhlouta – mmakhlou)**.  
    For evaluation and exams (where AI is not available), I am responsible for being able to:
    - Re-implement the classes and methods.
    - Explain the inheritance relationships and constructor/destructor order.
    - Justify the design choices (e.g. use of virtual inheritance in `ex03`).

Additional sections (such as more detailed usage examples, class diagrams, or notes on alternative designs) can be added later if needed for presentations or further documentation.

