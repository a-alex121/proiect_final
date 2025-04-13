#pragma once

#include "Pathogen.h"

class Bacteria : public Pathogen {
public:
    Bacteria(int damage);
    ~Bacteria();

    void attack(Cell* cell);
    void display() const;
};