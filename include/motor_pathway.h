#pragma once
#include <iostream>
#include "nerve_cell.h"

struct MotorPathway {
	NerveCell* upper_neuron;
	NerveCell* lower_neuron;
	MotorPathway(NerveCell* upper, NerveCell* lower)
		: upper_neuron(upper), lower_neuron(lower) {
	}
};
