#include <iostream>
#include "human.h"
#include "muscle.h"
#include "pathogen.h"

int main() {

    void Live() {
        Human human;
		human.addMuscle(new Muscle("Biceps"));
		human.addMuscle(new Muscle("Triceps"));
		human.addMuscle(new Muscle("Quadricep"));
		human.addMuscle(new Muscle("Hamstring"));
		human.addMuscle(new Muscle("Calf"));
		human.addMuscle(new Muscle("Deltoid"));
		human.addMuscle(new Muscle("Pectoral"));

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
                break;
            case 2:
                human.Exercise();
                break;
            case 3:
                human.Rest();
                break;
            case 4: {
                std::string name;
                std::cout << "Enter pathogen name: ";
                std::cin >> name;
                human.AddPathogen(new Pathogen(name));
                std::cout << "Pathogen added.\n";
                break;
            }
            case 5:
                std::cout << human;
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 0);
    }
	Live();

    return 0;
}
