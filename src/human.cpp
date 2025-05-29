#pragma once
#include "human.h"
#include <iostream>

Human::~Human() {
	for (auto muscle : muscles) {
		delete muscle;
	}
	for (auto cell : immune_cells) {
		delete cell;
	}
	for (auto pathogen : pathogens) {
		delete pathogen;
	}
}

bool Human::IsHealthy() const {
	return immune_cells.size() > 0 && pathogens.size() == 0;
}

void Human::Exercise() {
	if (!IsHealthy()) {
		std::cout<< "Cannot exercise, human is not healthy. Rest is recommended.\n";
	}
	else {
		for (int i = 0; i < muscles.size(); i++) {
			muscles[i]->Contract();
		}
		std::cout << "Exercising...\n";
	}
}

void Human::Rest() {
	if (!IsHealthy()) {
		for (int i = 0; i < 10; i++) {
			immune_cells.push_back(new ImmuneCell());
		}
		std::cout << "Resting to strenghten immune system...\n";
	}
	else {
		std::cout << "Resting..." << std::endl;
	}
}

void Human::Eat() {
	for (int i = 0; i < muscles.size(); i++) {
		for (int j = 0; j < muscles[i]->GetMuscleCells().size(); j++) {
			muscles[i]->GetMuscleCells()[j]->ProduceEnergy();
			muscles[i]->GetMotorPathway()->lower_neuron->ProduceEnergy();
			muscles[i]->GetMotorPathway()->upper_neuron->ProduceEnergy();
		}
	}
	std::cout << "Eating to restore energy...\n";
}

std::vector<Pathogen*> Human::GetPathogens() {
	return pathogens;
}

void Human::AddPathogen(Pathogen* pathogen) {
	if (pathogen) {
		pathogens.push_back(pathogen);
	}
}

void Human::AddMuscle(Muscle* muscle) {
	if (muscle) {
		muscles.push_back(muscle);
	}
}

std::ostream& operator<<(std::ostream& os, const Human& human) {
	os << "Human health details:\n";
	os << "  Healthy: " << (human.IsHealthy() ? "Yes" : "No") << "\n";
	os << "  Immune cells density: " << human.immune_cells.size() << "\n";
	os << "  Pathogens: " << human.pathogens.size() << "\n";
	for (int i = 0; i < human.pathogens.size(); i++) {
		os << "    Pathogen: " << human.pathogens[i]->GetName() << std::endl;
	}
	return os;
}

