#include "ImmuneCell.h"
#include <iostream>

ImmuneCell::ImmuneCell(int energy) : Cell(energy) {}
ImmuneCell::ImmuneCell(const ImmuneCell& other) : Cell(other) {}
ImmuneCell::~ImmuneCell() {}

void ImmuneCell::attackPathogen(Pathogen* pathogen) {
    std::cout << "ImmuneCell attacks a pathogen!\n";
    pathogen->setDamage(pathogen->getDamage() - 2);
}
void ImmuneCell::display() const {
    std::cout << "Display ImmuneCell with energy: " << energy << "\n";
}
Cell* ImmuneCell::divide() {
    if (energy >= 10) {
        energy /= 2;
        return new ImmuneCell(*this);
    }
    return nullptr;
}