#include "MuscleCell.h"
#include <iostream>

MuscleCell::MuscleCell(int energy) : Cell(energy) {}
MuscleCell::MuscleCell(const MuscleCell& other) : Cell(other) {}
MuscleCell::~MuscleCell() {}

void MuscleCell::contract() const {
    std::cout << "MuscleCell contracts\n";
}
void MuscleCell::display() const {
    std::cout << "Display MuscleCell with energy: " << energy << "\n";
}
Cell* MuscleCell::divide() {
    if (energy >= 10) {
        energy /= 2;
        return new MuscleCell(*this);
    }
    return nullptr;
}