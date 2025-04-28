#include "muscle_cell.h"
#include <iostream>

MuscleCell::MuscleCell(std::string name, int energy) : Cell(name, energy) {}
MuscleCell::MuscleCell(const MuscleCell& other) : Cell(other) {}
MuscleCell::~MuscleCell() {}

void MuscleCell::Contract(){
    std::cout << "MuscleCell " << name <<" contracts\n";
	this->SetEnergy(this->GetEnergy() - 1);
}

void MuscleCell::Display() const {
    std::cout << "Display MuscleCell " << name << " with energy : " << energy << "\n";
}

Cell* MuscleCell::Divide() {
    return nullptr;
}

std::string MuscleCell::type = "Muscle";
std::string MuscleCell::GetType() { return type; }