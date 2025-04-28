#include "tissue.h"

Tissue::Tissue(){}
Tissue::~Tissue() {
	//o sa distrug fiecare celula in parte igggg
	std::cout << "Tissue destroyed\n";
}

std::string Tissue::m_tissue_type = "Tissue";

/*template <typename T>
void Tissue::AddCell(T* cell) {
	m_cells.push_back(cell);
	std::cout << "Added cell " << cell->GetName() << " to tissue\n";
}

*/