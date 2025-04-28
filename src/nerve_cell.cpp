#include "nerve_cell.h"
#include <iostream>

NerveCell::NerveCell(std::string name, int energy) : Cell(name, energy) {}
NerveCell::NerveCell(const NerveCell& other) : Cell(other) {}
NerveCell::~NerveCell() {}

void NerveCell::TransmitSignal() const {
    std::cout << "NerveCell transmits nerve signal\n";
}
void NerveCell::ActivateMuscle(MuscleCell* muscle_cell) const {
    std::cout << "NerveCell sends signal to MuscleCell " << muscle_cell->GetName() <<"\n";
}
void NerveCell::Display() const {
    std::cout << "Display NerveCell " << name << " with energy: " << energy << "\n";
}

Cell* NerveCell::Divide() {
    return nullptr;
}

std::string NerveCell::type = "Nerve";
std::string NerveCell::GetType() { return type; }