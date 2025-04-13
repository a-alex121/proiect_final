#pragma once

#include "Cell.h"

class NerveCell : public Cell {
public:
    NerveCell(int energy);
    NerveCell(const NerveCell& other);
    ~NerveCell();

    void transmitSignal() const;
    void activateMuscle() const;

    void display() const;
    Cell* divide();
};