#pragma once

#include "muscle_cell.h"

class NerveCell : public Cell {
public:
    NerveCell();
    NerveCell(const NerveCell& other);
    ~NerveCell();

    std::string GetType() const;

    void TransmitSignal(NerveCell* target);
	void ActivateMuscle(MuscleCell* muscle_cell);


    Cell* Divide();

protected:
	static int next_id;

private:
    static const std::string type;
};