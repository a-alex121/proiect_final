#pragma once
#include <iostream>
#include "cell.h"
#include <vector>

class Tissue {
public:
	Tissue();
	virtual ~Tissue();
	static std::string m_tissue_type;

	std::vector <Cell*> m_cells;
	
	template <typename T>
	void AddCell(T* cell);

	std::string GetTissueType() const { return m_tissue_type; }

protected:
private:
};