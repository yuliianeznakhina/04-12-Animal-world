#pragma once
#include <iostream>
#include "Animal.h"

using namespace std;

class Herbivore :public Animal
{
protected:
	double weight;
	bool alive;
public:
	Herbivore() { weight = 10; alive = true; }
	Herbivore(double w) { weight = w; alive = true; }

	virtual void SetWeight(double w) = 0;
	virtual double GetWeight() = 0;
	virtual void SetAlive(bool a) = 0;
	virtual double GetAlive() = 0;

	virtual void EatGrass() = 0;
};
