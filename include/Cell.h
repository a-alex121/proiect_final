#pragma once

#include <iostream>

class Cell {
protected:
    int energy;

public:
    Cell(int energy);
    Cell(const Cell& other);
    virtual ~Cell();

    int getEnergy() const;
    void setEnergy(int energy);

    virtual void display() const;
    virtual Cell* divide() = 0;
};