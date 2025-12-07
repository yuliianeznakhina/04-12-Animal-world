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
	void AddHerbivore(Herbivore& obj)
	{
		herbivores.push_back(obj);
	}
	void AddCarnivore(Carnivore& obj)
	{
		carnivores.push_back(obj);
	}
	Herbivore& GetHerbivore(int i)
	{
		return herbivores[i];
	}
	Carnivore& GetCarnivore(int i)
	{
		return carnivores[i];
	}
	void HerbivoresEat()
	{
		for (auto ptr = herbivores.begin(); ptr != herbivores.end(); ptr++)
		{
			ptr->EatGrass();
		}
	}
	void CarnivoresEat()
	{
		for (auto ptr = carnivores.begin(); ptr != carnivores.end(); ptr++)
		{
			int i = 0;
			ptr->Eat(&herbivores[i]);
			i++;
		}
	}
};
