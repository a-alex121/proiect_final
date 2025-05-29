#include <iostream>
#include "nerve_cell.h"
#include "muscle_cell.h"
#include "immune_cell.h"
#include "pathogen.h"
#include <vector>

int main() {
   NerveCell* n1 = new NerveCell();
   MuscleCell* m1 = new MuscleCell(); 
   ImmuneCell* i1 = new ImmuneCell();

   std::vector<Cell*> cells;
   cells.push_back(n1);
   cells.push_back(m1); 
   cells.push_back(i1); 


   if (i1->Divide()) { 
       i1->Display(); 
       std::cout << "ImmuneCell divided into two cells\n";
   }
   else {
       std::cout << "ImmuneCell does not have enough energy to divide\n";
   }

   NerveCell* n2 = new NerveCell();

   n1->TransmitSignal(n2); 
   n1->ActivateMuscle(m1); 
   m1->Contract(); 

   std::cout << i1->GetType() << std::endl;

   n1->SetEnergy(-1);

   std::cout << "salut " << m1->GetName() <<" " << m1->GetType() <<  " " << m1->GetId();

   m1->ProduceEnergy();
   i1->ProduceEnergy();

   std::cout << i1->GetName() << " energy: " << i1->GetEnergy() << std::endl;

   delete m1;
   delete i1;


   MuscleCell* m2 = new MuscleCell();

   delete m2;

  



   return 0;
}
