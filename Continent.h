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
	virtual void AddHerbivore(Herbivore& obj) = 0;
	virtual void AddCarnivore(Carnivore& obj) = 0;
	virtual Herbivore& GetHerbivore(int i) = 0;
	virtual Carnivore& GetCarnivore(int i) = 0;
	virtual void HerbivoresEat() = 0;
	virtual void CarnivoresEat() = 0;
};
