#include <iostream>
#include<vector>
#include"Continent.h"
#include"Africa.h"
#include"North America.h"

#include "Carnivore.h"
#include "Wolf.h"
#include "Lion.h"

#include "Herbivore.h"
#include "Wildebeest.h"
#include "Bison.h"

using namespace std;

int main()
{
	Africa africa;
	NorthAmerica northAmerica;

	Carnivore* carnivore;
	Herbivore* herbivore;
	double a;
	int i;

	int choice;
	cout << "1 - Add Wolf\n2 - Add Lion\n3 - Add Wildebeest\n4 - Add Bison\n5 - All herbivores eat\n6 - All carnivores eat\n7 - One herbivore in Africa eats\n8 - One herbivore in North America eats\n9 - One carnivore in Africa eats\n10 - One carnivore in North America eats\nPlease Choose: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\nEnter power: ";
		cin >> a;
		carnivore = new Wolf(a);
		northAmerica.AddCarnivore(carnivore);
		break;
	case 2:
		cout << "\nEnter power: ";
		cin >> a;
		carnivore = new Lion(a);
		africa.AddCarnivore(carnivore);
		break;
	case 3:
		cout << "\nEnter weight ";
		cin >> a;
		herbivore = new Wildebeest(a);
		northAmerica.AddHerbivore(herbivore);
		break;
	case 4:
		cout << "\nEnter weight ";
		cin >> a;
		herbivore = new Bison(a);
		northAmerica.AddHerbivore(herbivore);
		break;
	case 5:
		northAmerica.AllHerbivoresEat();
		africa.AllHerbivoresEat();
		break;
	case 6:
		northAmerica.AllCarnivoresEat();
		africa.AllCarnivoresEat();
		break;
	case 7:
		cout << "\nEnter index ";
		cin >> i;
		africa.HerbivoreEat(i);
		break;
	case 8:
		cout << "\nEnter index ";
		cin >> i;
		africa.CarnivoreEat(i);
		break;
	case 9:
		cout << "\nEnter index ";
		cin >> i;
		northAmerica.HerbivoreEat(i);
		break;
	case 10:
		cout << "\nEnter index ";
		cin >> i;
		northAmerica.CarnivoreEat(i);
		break;
	default:
		break;
	}
}