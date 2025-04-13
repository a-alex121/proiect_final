#pragma once

#include "Pathogen.h"

class Virus : public Pathogen {
public:
    Virus(int damage);
    ~Virus();

    void attack(Cell* cell);
    void display() const;
};