#include "Virus.h"
#include "Cell.h"
#include <iostream>

Virus::Virus(int damage) : Pathogen(damage) {}
Virus::~Virus() {}

void Virus::attack(Cell* cell) {
    std::cout << "Virus attacks a cell.\n";
    cell->setEnergy(cell->getEnergy() - 3);
}
void Virus::display() const {
    std::cout << "Display Virus with damage: " << damage << "\n";
}