#pragma once

#include <iostream>
#include "mitochondria.h"
#include "logger.h"

class Cell {

public:
   Cell(std::string name, int energy);
   Cell(const Cell& other);
   virtual ~Cell();

   static std::string GetType();
   static void SetMitochondrialEnergy(int energy);
   static int GetMitochondrialEnergy();

   int GetEnergy() const;
   void SetEnergy(int energy);

   std::string GetName() const;

   virtual void Display() const;
   virtual Cell* Divide() = 0;

   void ProduceEnergy();

protected:
	std::string name;
	int energy;

private:
	static std::string type;
	static int mitochondrial_energy;
	Mitochondria mitochondria;
};