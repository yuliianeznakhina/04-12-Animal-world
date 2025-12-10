#pragma once
#include <iostream>
#include "Animal.h"
#include "Carnivore.h"
#include "Herbivore.h"

using namespace std;

class Wolf :public Carnivore
{
public:
	Wolf() :Carnivore() {}
	Wolf(double p) :Carnivore(p) {}

	void SetPower(double p) { power = p; }
	double GetPower() { return power; }

	void Eat(Herbivore* herbivore)
	{
		if (power > herbivore->GetWeight())
		{
			power += 10;
			herbivore->SetAlive(false);
			cout << "Wolf has eaten.\n";
		}
		else { power -= 10; cout << "Wolf has not eaten.\n";}
	}
};