#include "immune_cell.h"
#include <iostream>

ImmuneCell::ImmuneCell() : Cell(10, ImmuneCell::next_id++) {}
ImmuneCell::ImmuneCell(const ImmuneCell& other) : Cell(other) {}
ImmuneCell::~ImmuneCell() { std::cout << GetName() << " destroyed. \n"; }

void ImmuneCell::AttackPathogen(Pathogen* pathogen) {
    std::cout << GetName() <<" attacks pathogen "<< pathogen->GetName() <<"\n";
	pathogen->SetEnergy(pathogen->GetEnergy() - 5);
    delete this;
}

Cell* ImmuneCell::Divide() {
    if (energy >= 10) {
        energy /= 2;
        return new ImmuneCell(*this);
    }
    return nullptr;
}

int ImmuneCell::next_id = 1;

std::string ImmuneCell::GetType() const { return "ImmuneCell"; }