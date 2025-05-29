#include "muscle.h"
#include <iostream>
#include <vector>

Muscle::Muscle(std::string name) : name(name) {
	for (int i = 0; i < 10; i++) {
		muscle_cells.push_back(new MuscleCell());
	}
	motor_pathway = new MotorPathway(new NerveCell(),new NerveCell());
}

std::string Muscle::GetName() const { return name; }
std::vector <MuscleCell*> Muscle::GetMuscleCells() { return muscle_cells; }
MotorPathway* Muscle::GetMotorPathway() { return motor_pathway; }

void Muscle::Contract() {
	motor_pathway->upper_neuron->TransmitSignal(motor_pathway->lower_neuron);

	for (int i = 0; i < 10; i++) {
		motor_pathway->lower_neuron->ActivateMuscle(muscle_cells[i]);
	}
}
