#pragma once

#include "pathogen.h"

class Bacteria : public Pathogen {
public:
    Bacteria(std::string name, int damage);
    ~Bacteria();

    static std::string GetType();

    void Attack(Cell* cell);
    void Display() const;

private:

protected:
	static std::string type;

};