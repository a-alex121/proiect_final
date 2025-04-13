#include "Bacteria.h"
#include "Cell.h"
#include <iostream>

Bacteria::Bacteria(int damage) : Pathogen(damage) {}
Bacteria::~Bacteria() {}

void Bacteria::attack(Cell* cell) {
    std::cout << "Bacteria attacks a cell.\n";
    cell->setEnergy(cell->getEnergy() - 2);
}
void Bacteria::display() const {
    std::cout << "Display Bacteria with damage: " << damage << "\n";
}