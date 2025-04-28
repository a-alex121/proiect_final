#include "virus.h"
#include "cell.h"
#include <iostream>

Virus::Virus(std::string name, int damage) : Pathogen(name, damage) {}
Virus::~Virus() {}

void Virus::Attack(Cell* cell) {
    std::cout << "Virus " << name << " attacks cell "<< cell->GetName() <<"\n";
    cell->SetEnergy(cell->GetEnergy() - 3);
}
void Virus::Display() const {
    std::cout << "Display Virus " << name << " with damage: " << damage << "\n";
}

std::string Virus::type = "Virus";
std::string Virus::GetType() { return type; }