#include <iostream>
#include "NerveCell.h"
#include "MuscleCell.h"
#include "ImmuneCell.h"
#include "Virus.h"
#include "Bacteria.h"
#include <vector>

int main() {
    NerveCell n1(15);
    MuscleCell m1(12);
    ImmuneCell i1(18);
    Virus v1(5);
    Bacteria b1(4);

    std::vector<Cell*> cells;
    cells.push_back(&n1);
    cells.push_back(&m1);
    cells.push_back(&i1);

    std::vector<Pathogen*> pathogens;
    pathogens.push_back(&v1);
    pathogens.push_back(&b1);

    for (int i = 0; i < cells.size(); i++) {
        cells[i]->display();
        Cell* copy = cells[i]->divide();
        if (copy) {
            std::cout << "Cell divided! ";
            copy->display();
            delete copy;
        }
    }

    for (int i = 0; i < pathogens.size(); i++) {
        pathogens[i]->display();
        pathogens[i]->attack(&m1);
    }

    i1.attackPathogen(&v1);
    i1.attackPathogen(&b1);

    n1.transmitSignal();
    n1.activateMuscle();
    m1.contract();

    return 0;
}
