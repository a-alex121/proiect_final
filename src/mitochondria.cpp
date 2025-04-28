#include "mitochondria.h"
#include "cell.h"

void Mitochondria::GiveEnergy(Cell* cell)
{
	cell->SetEnergy(cell->GetEnergy() + 5);
	std::cout << cell->GetName() << " received " << 5 << " energy from Mitochondria\n";

}
