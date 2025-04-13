#include "Cell.h"

Cell::Cell(int energy) : energy(energy){}
Cell::Cell(const Cell& other) : energy(other.energy) {}
Cell::~Cell() {}

int Cell::getEnergy() const { return energy; }
void Cell::setEnergy(int energy) { this->energy = energy; }


void Cell::display() const { std::cout << "Display Cell with energy: " << energy << "\n"; }