#pragma once

#include "cell.h"

class MuscleCell : public Cell {
public:
    MuscleCell(std::string name, int energy);
    MuscleCell(const MuscleCell& other);
    ~MuscleCell();

	static std::string GetType();

    void Contract();
    void Display() const;
    Cell* Divide();

protected:

private:
    static std::string type;
};