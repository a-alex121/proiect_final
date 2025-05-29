#pragma once

#include "cell.h"

class MuscleCell : public Cell {
public:
    MuscleCell();
    MuscleCell(const MuscleCell& other);
    ~MuscleCell();

    std::string GetType() const;

    void Contract();
    Cell* Divide();

protected:
    static int next_id;

private:
    static const std::string type;
    void ConsumeEnergy();
};