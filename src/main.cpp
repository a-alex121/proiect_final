#include <iostream>
#include "nerve_cell.h"
#include "muscle_cell.h"
#include "immune_cell.h"
#include "virus.h"
#include "bacteria.h"
#include <vector>

int main() {
   NerveCell* n1 = new NerveCell("n1", 15);
   MuscleCell* m1 = new MuscleCell("m1", 12); 
   ImmuneCell* i1 = new ImmuneCell("i1", 18);
   Virus* v1 = new Virus("v1", 5); 
   Bacteria* b1 = new Bacteria("b1", 4); 

   std::vector<Cell*> cells;
   cells.push_back(n1);
   cells.push_back(m1); 
   cells.push_back(i1); 

   std::vector<Pathogen*> pathogens;
   pathogens.push_back(v1);
   pathogens.push_back(b1); 

   if (i1->Divide()) { 
       i1->Display(); 
       std::cout << "ImmuneCell divided into two cells\n";
   }
   else {
       std::cout << "ImmuneCell does not have enough energy to divide\n";
   }
   for (int i = 0; i < pathogens.size(); i++) {
       pathogens[i]->Display();
       pathogens[i]->Attack(m1); 
   }

   i1->AttackPathogen(v1); 
   i1->AttackPathogen(b1); 

   n1->TransmitSignal(); 
   n1->ActivateMuscle(m1); 
   m1->Contract(); 

   std::cout << i1->GetType() << std::endl;

   n1->SetEnergy(-1);

   std::cout << "salut " << m1->GetName() <<"\n";

   m1->ProduceEnergy();
   i1->ProduceEnergy();

   delete m1;
   delete i1;
   delete v1;
   delete b1;

   return 0;
}
