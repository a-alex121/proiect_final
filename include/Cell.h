#pragma once

#include <iostream>
#include <string>
#include "mitochondria.h"
#include "logger.h"

class Cell {

public:
   Cell(int energy, const int id);
   Cell(const Cell& other);
   virtual ~Cell();

   int GetId() const;
   virtual std::string GetType() const;
   virtual std::string GetName() const;

   static void SetMitochondrialEnergy(int energy);
   static int GetMitochondrialEnergy();

   int GetEnergy() const;
   void SetEnergy(int energy);

   virtual void Display() const;
   virtual Cell* Divide() = 0;

   void ProduceEnergy();

protected:
	const int id;
	static int next_id;
	int energy;

private:
	static std::string type;
	static int mitochondrial_energy;
	Mitochondria mitochondria;
};