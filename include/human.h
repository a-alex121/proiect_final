#pragma once
#include "muscle.h"
#include "immune_cell.h"
#include "pathogen.h"

class Human {
public:
	~Human();

	void Eat();
	void Exercise();
	void Rest();

	std::vector<Pathogen*> GetPathogens();
	void AddPathogen(Pathogen* pathogen);

	void AddMuscle(Muscle* muscle);

	friend std::ostream& operator<<(std::ostream& os, const Human& human);

protected:

private:
	bool IsHealthy() const;
	std::vector<Muscle*> muscles;
	std::vector<ImmuneCell*> immune_cells;
	std::vector<Pathogen*> pathogens;
};
