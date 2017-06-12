// CS1102-Cities.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
#include <list>
#include "City.h"
using namespace std;

void selection(int);
City addCity();

list <City> cities;

int main()
{
	string option;
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
		cout << endl << endl << "Opcion: ";
		cin >> option;

		bool saber = isdigit(option[0]);
		if (saber) 
			selection(option[0]);
		else 
			cout << "Por favor ingrese un numero valido" << endl << "Opcion: ";
		

		if (option[0] == 0) break;
	}
    return 0;
}

void selection(int option)
{
	switch (option){
	case 49: addCity();
	case 50: cout << "2";
	case 51: cout << 3;
	}
}

City addCity() {
	string nombre;
	float x, y;
	char c;
	cout << "- Ingrese el nombre de la ciudad: "; cin >> nombre;
	cout << "- Ingrese la coordenada X: "; cin >> x;
	cout << "- Ingrese la coordenada Y: "; cin >> y;
	cout << "- Ingrese el estado: "; cin >> c;
	
	City addedA(nombre, x, y, c);
	cities.push_front(addedA);
	addedA.print();
	return addedA;
}