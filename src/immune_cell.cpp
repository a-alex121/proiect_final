#include "immune_cell.h"
#include <iostream>

ImmuneCell::ImmuneCell(std::string name, int energy) : Cell(name, energy) {}
ImmuneCell::ImmuneCell(const ImmuneCell& other) : Cell(other) {}
ImmuneCell::~ImmuneCell() {}

void ImmuneCell::AttackPathogen(Pathogen* pathogen) {
    std::cout << "ImmuneCell "<< name <<" attacks pathogen "<< pathogen->GetName() <<"\n";
    pathogen->SetDamage(pathogen->GetDamage() - 2);
}
void ImmuneCell::Display() const {
    std::cout << "Display ImmuneCell " << name << " with energy: " << energy << "\n";
}
Cell* ImmuneCell::Divide() {
    if (energy >= 10) {
        energy /= 2;
        return new ImmuneCell(*this);
    }
    return nullptr;
}

std::string ImmuneCell::type = "Immune";
std::string ImmuneCell::GetType() { return type; }