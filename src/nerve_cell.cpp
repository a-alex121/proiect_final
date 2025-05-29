#include "nerve_cell.h"
#include <iostream>

NerveCell::NerveCell() : Cell(70, NerveCell::next_id++) {}
NerveCell::NerveCell(const NerveCell& other) : Cell(other) {}
NerveCell::~NerveCell() { std::cout << GetName() << " destroyed. \n"; }

void NerveCell::TransmitSignal(NerveCell* target) {
    std::cout << GetName() << " transmits signal to " << target->GetName() << std::endl;
	this->SetEnergy(this->GetEnergy() - 1);
}

void NerveCell::ActivateMuscle(MuscleCell* muscle_cell) {
    std::cout << GetName() << " sends signal to " << muscle_cell->GetName() <<"\n";
	this->SetEnergy(this->GetEnergy() - 1);
}

Cell* NerveCell::Divide() {
    return nullptr;
}

int NerveCell::next_id = 1;

std::string NerveCell::GetType() const { return "NerveCell"; }