#pragma once

#include "pathogen.h"

class Virus : public Pathogen {
public:
    Virus(std::string name, int damage);
    ~Virus();

	static std::string GetType();

	std::string GetName() const { return name; }

    void Attack(Cell* cell);
    void Display() const;

protected:

private:
	static std::string type;
};