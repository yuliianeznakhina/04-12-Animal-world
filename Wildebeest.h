#pragma once
#include <iostream>
#include "Animal.h"
#include "Herbivore.h"


using namespace std;

class Wildebeest :public Herbivore
{
public:
	Wildebeest() :Herbivore() {}
	Wildebeest(double w):Herbivore(w) {}

	void SetWeight(double w) { weight = w; }
	double GetWeight() { return weight; }
	void SetAlive(bool a) { alive = a; }
	double GetAlive() { return alive; }

	void EatGrass() { weight += 10; cout << "Wildebeest has eaten.\n"; }
	
};
