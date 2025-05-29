#include "pathogen.h"
#include "cell.h"
#include <iostream>

Pathogen::Pathogen(std::string name, int energy) : name(name), energy(energy) {}
Pathogen::~Pathogen() {
	fout<< "Pathogen " << name << " destroyed\n";
}

int Pathogen::GetEnergy() const { return energy; }
void Pathogen::SetEnergy(int energy) { this->energy = energy; }

std::string Pathogen::GetName() const { return name; }

void Pathogen::Attack(Cell* cell) {
    fout<< "Pathogen " << name << " attacks cell " << cell->GetName() << "\n";
    cell->SetEnergy(cell->GetEnergy() - 10);
}

void Pathogen::Display() {
	fout<< "Pathogen Name: " << name << ", Energy: " << energy << "\n";
}

std::string Pathogen::type = "Pathogen";
std::string Pathogen::GetType() { return Pathogen::type; }