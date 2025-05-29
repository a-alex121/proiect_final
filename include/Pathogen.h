#pragma once

#include <iostream>

class Cell;

class Pathogen {

public:
    Pathogen(std::string name, int energy);
    virtual ~Pathogen();

	static std::string GetType();

    int GetEnergy() const;
    void SetEnergy(int energy);

	std::string GetName() const;

    virtual void Attack(Cell* cell);
    virtual void Display();

protected:
    
private:
	static std::string type;
	std::string name;
	int energy;

};