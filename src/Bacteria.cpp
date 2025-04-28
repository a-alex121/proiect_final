#include "bacteria.h"
#include "cell.h"
#include <iostream>

Bacteria::Bacteria(std::string name, int damage) : Pathogen(name, damage) {}
Bacteria::~Bacteria() {}

void Bacteria::Attack(Cell* cell) {
    std::cout << "Bacteria " << name << " attacks cell " << cell->GetName() << std::endl;
    cell->SetEnergy(cell->GetEnergy() - 2);
}
void Bacteria::Display() const {
    std::cout << "Display Bacteria "<< name << " with damage: " << damage << "\n";
}

std::string Bacteria::type = "Bacteria";
std::string Bacteria::GetType() { return type; }