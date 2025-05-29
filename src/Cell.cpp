#include "cell.h"
#include "mitochondria.h"

Cell::Cell(int energy, const int id): energy(energy), id(id){}
Cell::Cell(const Cell& other) : energy(other.energy), id(other.id) {}
Cell::~Cell() {}

int Cell::GetId() const {
	return id;
}

std::string Cell::GetName() const {
	return GetType() + std::to_string(this->GetId());
}

int Cell::GetEnergy() const { return energy; }
void Cell::SetEnergy(int energy) { 
	this->energy = energy;
	if (energy <= 0) {
		delete this;
	}
}

void Cell::Display() const { std::cout << "Display Cell " << GetName() << " with energy : " << energy << "\n"; } 

void Cell::ProduceEnergy() {
	mitochondria.GiveEnergy(this);
	std::cout << "Cell " << GetName() << " produced energy\n";
}

std::string Cell::type = "Generic";
std::string Cell::GetType() const{ return Cell::type;}

void Cell::SetMitochondrialEnergy(int energy) { mitochondrial_energy = energy; }
int Cell::GetMitochondrialEnergy() { return mitochondrial_energy; }

int Cell::mitochondrial_energy = 3;
int Cell::next_id = 0;