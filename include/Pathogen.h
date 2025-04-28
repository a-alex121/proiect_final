#pragma once

#include <iostream>

class Cell;

class Pathogen {

public:
    Pathogen(std::string name, int damage);
    virtual ~Pathogen();

	static std::string GetType();

    int GetDamage() const;
    void SetDamage(int damage);

	std::string GetName() const;

    virtual void Attack(Cell* cell);
    virtual void Display() const = 0;

protected:
    std::string name;
    int damage;

private:
	static std::string type;

};