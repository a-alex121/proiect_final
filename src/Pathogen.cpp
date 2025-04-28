#include "pathogen.h"
#include "cell.h"
#include <iostream>

Pathogen::Pathogen(std::string name, int damage) : name(name), damage(damage) {}
Pathogen::~Pathogen() {
	std::cout << "Pathogen " << name << " destroyed\n";
}

int Pathogen::GetDamage() const { return damage; }
void Pathogen::SetDamage(int damage) { this->damage = damage; }

std::string Pathogen::GetName() const { return name; }

void Pathogen::Attack(Cell* cell) {
    std::cout << "Pathogen " << name << " attacks cell " << cell->GetName() << "\n";
    cell->SetEnergy(cell->GetEnergy() - 1);
}

std::string Pathogen::type = "Pathogen";
std::string Pathogen::GetType() { return Pathogen::type; }