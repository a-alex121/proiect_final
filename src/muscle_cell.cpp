#include "muscle_cell.h"
#include <iostream>

MuscleCell::MuscleCell() : Cell(100, MuscleCell::next_id++) {}
MuscleCell::MuscleCell(const MuscleCell& other) : Cell(other) {}
MuscleCell::~MuscleCell() { fout<< GetName() << " destroyed. \n"; }

void MuscleCell::Contract(){
    fout<< GetName() << " contracts\n";
	this->ConsumeEnergy();
	this->SetMitochondrialEnergy(this->GetMitochondrialEnergy() + 1); //creste potentialul de producere a energiei pentru mitocondrii
}

Cell* MuscleCell::Divide() {
    return nullptr;
}

void MuscleCell::ConsumeEnergy() {
	if (this->GetEnergy() > 0) {
		this->SetEnergy(this->GetEnergy() - 2);
		fout<< GetName() << " consumed energy, remaining energy: " << this->GetEnergy() << "\n";
	}
	else {
		fout<< GetName() << " has no energy left to consume.\n";
	}
}

int MuscleCell::next_id = 1;

std::string MuscleCell::GetType() const { return "MuscleCell"; }