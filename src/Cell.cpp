#include "cell.h"
#include "mitochondria.h"

Cell::Cell(std::string name, int energy) : name(name), energy(energy){}
Cell::Cell(const Cell& other) : energy(other.energy) {}
Cell::~Cell() {
	std::cout << "Cell " << name << " destroyed\n";
}

int Cell::GetEnergy() const { return energy; }
void Cell::SetEnergy(int energy) { 
	this->energy = energy;
	if (energy <= 0) {
		delete this;
	}
}

std::string Cell::GetName() const { return name; }

void Cell::Display() const { std::cout << "Display Cell " << name << " with energy : " << energy << "\n"; } 

void Cell::ProduceEnergy() {
	mitochondria.GiveEnergy(this);
	std::cout << "Cell " << name << " produced energy\n";
}

std::string Cell::type = "Generic";
std::string Cell::GetType() { return Cell::type;}

void Cell::SetMitochondrialEnergy(int energy) { mitochondrial_energy = energy; }
int Cell::GetMitochondrialEnergy() { return mitochondrial_energy; }

int Cell::mitochondrial_energy = 3;

