#include "Pathogen.h"
#include "Cell.h"
#include <iostream>

Pathogen::Pathogen(int damage) : damage(damage) {}
Pathogen::~Pathogen() {}

int Pathogen::getDamage() const { return damage; }
void Pathogen::setDamage(int damage) { this->damage = damage; }

void Pathogen::attack(Cell* cell) {
    std::cout << "Pathogen attacks a cell.\n";
    cell->setEnergy(cell->getEnergy() - 1);
}