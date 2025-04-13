#pragma once

#include "Cell.h"
#include "Pathogen.h"

class ImmuneCell : public Cell {
public:
    ImmuneCell(int energy);
    ImmuneCell(const ImmuneCell& other);
    ~ImmuneCell();

    void attackPathogen(Pathogen* pathogen);
    void display() const;
    Cell* divide();
};