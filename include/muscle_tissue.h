#pragma	once
#include <iostream>
#include "tissue.h"

class MuscleTissue : public Tissue{
public:
	MuscleTissue();
	~MuscleTissue();

	std::vector <MuscleCell*> m_muscle_cells;

	static std::string GetType();
	void ContractTissue();
};