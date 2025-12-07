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
	Africa obj;
	NorthAmerica northAmerica;

	Carnivore* ptr;
	Herbivore* ptr;
	double a;

	int choice;
	cout << "1 - Add Wolf\n2 - Add Lion\n3 - Add Wildebeest\n4 - Add Bison\n5 - All herbivores eat\n6 - All carnivores eat\n7 - One herbivore eats\n8 - One carnivore eats\nPlease Choose: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\nEnter power: ";
		cin >> a;
		ptr = new Wolf(a);
		northAmerica.AddCarnivore(ptr);
		break;
	}
}