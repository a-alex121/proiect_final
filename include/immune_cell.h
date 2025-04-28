#pragma once

#include "cell.h"
#include "pathogen.h"

class ImmuneCell : public Cell {
public:
    ImmuneCell(std::string name, int energy);
    ImmuneCell(const ImmuneCell& other);
    ~ImmuneCell();

    static std::string GetType();

    void AttackPathogen(Pathogen* pathogen);
    void Display() const;
    Cell* Divide();

protected:

private:
    static std::string type;
};