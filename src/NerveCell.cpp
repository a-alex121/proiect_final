#include "NerveCell.h"
#include <iostream>

NerveCell::NerveCell(int energy) : Cell(energy) {}
NerveCell::NerveCell(const NerveCell& other) : Cell(other) {}
NerveCell::~NerveCell() {}

void NerveCell::transmitSignal() const {
    std::cout << "NerveCell transmits nerve signal\n";
}
void NerveCell::activateMuscle() const {
    std::cout << "NerveCell sends signal to MuscleCell\n";
}
void NerveCell::display() const {
    std::cout << "Display NerveCell with energy: " << energy << "\n";
}
Cell* NerveCell::divide() {
    if (energy >= 10) {
        energy /= 2;
        return new NerveCell(*this);
    }
    return nullptr;
}