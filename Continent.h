#pragma once
#include <iostream>
#include<vector>
#include "Carnivore.h"
#include "Herbivore.h"

using namespace std;

class Continent
{
protected:
	vector<Herbivore>herbivores;
	vector<Carnivore>carnivores;

public:
	Continent(){}
	virtual void AddHerbivore(Herbivore* obj) = 0;
	virtual void AddCarnivore(Carnivore* obj) = 0;
	virtual void HerbivoreEat(int i) = 0;
	virtual void CarnivoreEat(int i) = 0;
	virtual void AllHerbivoresEat() = 0;
	virtual void AllCarnivoresEat() = 0;
};
