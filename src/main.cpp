#include <iostream>
#include "human.h"
#include "muscle.h"
#include "pathogen.h"

void Continue() {
	std::cout << "Press Enter to continue...";
	system("pause >nul");
	system("cls");
}

void Live(){

    Human human;

	human.AddMuscle(new Muscle("Biceps"));
	human.AddMuscle(new Muscle("Triceps"));
	human.AddMuscle(new Muscle("Quadriceps"));
	human.AddMuscle(new Muscle("Hamstring"));
	human.AddMuscle(new Muscle("Deltoid"));
	human.AddMuscle(new Muscle("Pectoral"));
	human.AddMuscle(new Muscle("Glute"));
	human.AddMuscle(new Muscle("Calf"));
    

    int choice;

    do {
        std::cout << "\n--- Human Simulation Menu ---\n";
        std::cout << "1. Eat\n";
        std::cout << "2. Exercise\n";
        std::cout << "3. Rest\n";
        std::cout << "4. Add Pathogen\n";
        std::cout << "5. Show Human Status\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        switch (choice) {
        case 1:
            human.Eat();
            Continue();
            break;
        case 2:
            human.Exercise();
            Continue();
            break;
        case 3:
            human.Rest();
            Continue();
            break;
        case 4: {
            std::string name;
			int energy;
            std::cout << "Enter pathogen name and energy: ";
            std::cin >> name >> energy;
            human.AddPathogen(new Pathogen(name, energy));
            std::cout << "Pathogen added. Human is sick now\n";
            Continue();
            break;
        }
        case 5:
            std::cout << human;
            Continue();
            break;
        case 0:
            std::cout << "Exiting...\n";
            Continue();
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
            Continue();
        }
    } while (choice != 0);
}

int main() {
	Live();

    return 0;
}
