#pragma once

#include <iostream>

class Cell;

class Pathogen {
protected:
    int damage;

public:
    Pathogen(int damage);
    virtual ~Pathogen();

    int getDamage() const;
    void setDamage(int damage);

    virtual void attack(Cell* cell);
    virtual void display() const = 0;
};