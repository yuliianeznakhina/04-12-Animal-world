#pragma once
#include <iostream>
#include<vector>
#include"Continent.h"
#include "Carnivore.h"
#include "Herbivore.h"

using namespace std;

class NorthAmerica : public Continent
{
public:
	NorthAmerica(){}
	void AddHerbivore(Herbivore* obj)
	{
		herbivores.push_back(*obj);
		cout << "Herbivore added to North America.\n";
	}
	void AddCarnivore(Carnivore* obj)
	{
		carnivores.push_back(*obj);
		cout << "Carnivore added to North America.\n";
	}
	void HerbivoreEat(int i)
	{
		herbivores[i].EatGrass();
	}
	virtual void CarnivoreEat(int i)
	{
		carnivores[i].Eat(&herbivores[i]);
	}
	void AllHerbivoresEat()
	{
		for (auto ptr = herbivores.begin(); ptr != herbivores.end(); ptr++)
		{
			ptr->EatGrass();
		}
	}
	void AllCarnivoresEat()
	{
		for (auto ptr = carnivores.begin(); ptr != carnivores.end(); ptr++)
		{
			int i = 0;
			ptr->Eat(&herbivores[i]);
			i++;
		}
	}
};
