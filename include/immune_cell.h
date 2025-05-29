#pragma once

#include "cell.h"
#include "pathogen.h"

class ImmuneCell : public Cell {
public:
    ImmuneCell();
    ImmuneCell(const ImmuneCell& other);
    ~ImmuneCell();

    std::string GetType() const;

    void AttackPathogen(Pathogen* pathogen);
    Cell* Divide();

protected:
	static int next_id;

private:
    static const std::string type;
};