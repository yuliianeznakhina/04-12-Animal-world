#pragma once
#include <iostream>
#include "Animal.h"
#include "Herbivore.h"

using namespace std;

class Carnivore
{
protected:
	double power;
public:
	Carnivore() { power = 10; }
	Carnivore(double p) { power = p; }

	virtual void SetPower(double p) = 0;
	virtual double GetPower() = 0;

	virtual void Eat(Herbivore* herbivore) = 0;
};
