#pragma once
#include <iostream>
#include "Animal.h"
#include "Carnivore.h"
#include "Herbivore.h"

using namespace std;

class Lion :public Carnivore
{
public:
	Lion() :Carnivore() {}
	Lion(double p) :Carnivore(p) {}

	void SetPower(double p) { power = p; }
	double GetPower() { return power; }

	void Eat(Herbivore* herbivore)
	{
		if (power > herbivore->GetWeight())
		{
			power += 10;
			herbivore->SetAlive(false);
			cout << "Lion has eaten.\n";
		}
		else { power -= 10; cout << "Lion has not eaten.\n";}
	}
};