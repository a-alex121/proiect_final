#pragma once
#include <vector>
#include <muscle_cell.h>
#include <nerve_cell.h>
#include <motor_pathway.h>
#include <string>

class Muscle {
public:
	Muscle(std::string name);
	void Contract();
	std::string GetName() const;
	std::vector <MuscleCell*> GetMuscleCells();
	MotorPathway* GetMotorPathway();


protected:

private:
	std::string name;
	std::vector<MuscleCell*> muscle_cells;
	MotorPathway* motor_pathway;
};