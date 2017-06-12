// CS1102-Cities.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
#include <list>
#include "City.h"
using namespace std;

void initializeSeed();
void selection(int);
City addCity();
void deleteCity();
void listTop100();
void listLess10Meters();
void calculateAverageDistance();
void getLongestDistance();
void getShortestDistance();

static list <City> cities;
static list <City>::iterator it;

int main()
{
	string option;
	initializeSeed();
	while (true) {
		cout << endl;
		cout << "--------------------------------------------------------" << endl;
		cout << "Menu" << endl;
		cout << "~ ~ ~" << endl;
		cout << "1. Agregar una nueva posicion" << endl;
		cout << "2. Eliminar una posicion por nombre" << endl;
		cout << "3. Listar los 100 primeros puntos" << endl;
		cout << "4. Listar los puntos ubicados a menos de 10 metros" << endl;
		cout << "5. Calcular la distancia promedio entre cada punto" << endl;
		cout << "6. Determinar la distancia entre los puntos mas lejanos" << endl;
		cout << "7. Determinar la distancia mas corta entre los puntos" << endl;
		cout << "8. TBD" << endl;
		cout << "9. TBD" << endl;
		cout << "0. Salir" << endl;
		cout << endl << endl << "- Opcion: ";
		cin >> option;

		cout << string(100, '\n');
		bool saber = isdigit(option[0]);
		if (saber)			
			selection(option[0]);
		else 
			cout << "**** Por favor ingrese una opcion valida ****" << endl << "- Opcion: ";		

		if (option[0] == 0) break;
	}
    return 0;
}

void initializeSeed() {
	City addedTestA("Lima", 32, 65, 'A');
	cities.push_back(addedTestA);
	City addedTestB("Ica", 2, 34, 'A');
	cities.push_back(addedTestB);
	City addedTestC("Arequipa", 87, 45, 'A');
	cities.push_back(addedTestC);
}

void selection(int option)
{
	switch (option){
	case 49: addCity(); break;
	case 50: deleteCity(); break;
	case 51: listTop100(); break;
	case 52: listLess10Meters(); break;
	case 53: calculateAverageDistance(); break;
	}
}

City addCity() {
	string name;
	float x, y;
	char c;
	cout << "- Ingrese el nombre de la ciudad a crear: "; cin >> name;
	cout << "- Ingrese la coordenada X: "; cin >> x;
	cout << "- Ingrese la coordenada Y: "; cin >> y;
	cout << "- Ingrese el estado: "; cin >> c;
	
	City addedA(name, x, y, c);
	cities.push_back(addedA);
	return addedA;
}

void deleteCity() {
	string cityName, name;
	cout << "- Ingrese el nombre de la ciudad a eliminar: "; cin >> name;
	for (it = cities.begin(); it != cities.end(); ++it) {
		cityName = (*it).getName();
		if (name.compare(cityName) == 0) {
			cities.erase(it);
			return;
		}
	}
}

void listTop100() {
	int i = 0;
	for (it = cities.begin(); it != cities.end() && i < 100; ++it) {
		(*it).print();
		i++;
	}
}

void listLess10Meters() {
	for (it = cities.begin(); it != cities.end(); ++it)
		if ((*it).getDistance() < 10)
			(*it).print();	
}

void calculateAverageDistance() {
	float sumX = 0, sumY = 0;
	for (it = cities.begin(); it != cities.end(); ++it) {
		sumX += (*it).getX();
		sumY += (*it).getY();
	}
	cout << "- Distancia promedio de X: " << sumX / cities.size() << endl;
	cout << "- Distancia promedio de Y: " << sumY / cities.size() << endl;
}

void getLongestDistance() {
	for (it = cities.begin(); it != cities.end(); ++it) {
	
	}
}

void getShortestDistance() {

}