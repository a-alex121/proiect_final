#pragma once

#include "Cell.h"

class MuscleCell : public Cell {
public:
    MuscleCell(int energy);
    MuscleCell(const MuscleCell& other);
    ~MuscleCell();

    void contract() const;
    void display() const;
    Cell* divide();
};