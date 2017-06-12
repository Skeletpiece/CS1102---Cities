// City.cpp : Defines the city class for this project.
//

#include "stdafx.h"
#include "City.h"
#include <iostream>

City::City()
{
	this->name = "";
	this->x = 0;
	this->y = 0;
	this->status = '%';
}

City::City(string name)
{
	this->name = name;
	this->x = 0;
	this->y = 0;
	this->status = '%';
}

City::City(string name, float x, float y)
{
	this->name = name;
	this->x = x;
	this->y = y;
	this->status = '%';
}

City::City(string name, float x, float y, char status)
{
	this->name = name;
	this->x = x;
	this->y = y;
	this->status = status;
}

City::~City()
{
	//	Destructor	-	Do nothing
}

float City::getDistance()
{
	return sqrt(x*x + y*y);
}

void City::print()
{
	cout << "= = = = " << endl;
	cout << "Name:	" << this->name << endl;
	cout << "	X ->	" << this->x << endl;
	cout << "	Y ->	" << this->y << endl;
	cout << "Status: " << this->status << endl;
}

string City::getName() {
	return this->name;
}

int City::getX() {
	return this->x;
}

int City::getY() {
	return this->y;
}

float City::getDistanceByCity(float rX, float rY)
{
	return sqrt((x - rX)*(x - rX) + (y - rY)*(y - rY));
}