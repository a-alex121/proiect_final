#include "mitochondria.h"
#include "cell.h"

void Mitochondria::GiveEnergy(Cell* cell)
{
	cell->SetEnergy(cell->GetEnergy() + 5);
	fout<< cell->GetName() << " received " << 5 << " energy from Mitochondria\n";

}
