#include "muscle_tissue.h"
#include "muscle_cell.h"
#include "logger.h"

MuscleTissue::MuscleTissue() : Tissue() 
{
	fout << "MuscleTissue created\n";
}

MuscleTissue::~MuscleTissue()
{
	fout << "MuscleTissue destroyed\n";
}

std::string MuscleTissue::m_tissue_type = "MuscleTissue";

void MuscleTissue::ContractTissue()
{
	for (int i = 0; i < m_cells.size(); ++i) 
	{
		m_muscle_cells[i]->Contract();
	}
}

//void MuscleTissue::AddCell(Cell* cell)