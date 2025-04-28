#pragma once

#include "muscle_cell.h"

class NerveCell : public Cell {
public:
    NerveCell(std::string name, int energy);
    NerveCell(const NerveCell& other);
    ~NerveCell();

    static std::string GetType();

    void TransmitSignal() const;
	void ActivateMuscle(MuscleCell* muscle_cell) const;


    Cell* Divide();

    void Display() const;

protected:

private:
    static std::string type;
};