#include <iostream> 
#include <cstdlib>
#include <cstring>
#include "car.h"
using namespace std;
Car::Car()
{
	for(int i=0; i<MAX_STR; i++)
	{
		make[i] = '\0';
		model[i] = '\0';
		color[i] = '\0';
	}
	year = 0;
	inStock = 0;

}
Car::Car(char make[MAX_STR], char model[MAX_STR], char color[MAX_STR], int year, int inStock)
{
	setMake(make);
	setModel(model);
	setColor(color);
	setYear(year);
	setInStock(inStock);
	
}
 
void Car::print()
{	
	cout << "======Car======" << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "Year: " << year << endl;
	cout << "In stock total: " << inStock << endl;
}

void Car::getMake(char make[MAX_STR])
{
	strcpy(make,this->make);
}

void Car::getModel(char model[MAX_STR])
{
	strcpy(model,this->model);	
}

void Car::getColor(char color[MAX_STR])
{
	strcpy(color,this->color);
}

int Car::getYear()
{	
	return year;
}

int Car::getInStock()
{
	return inStock;
}

void Car::setMake(const char make[MAX_STR])
{
	strcpy(this->make, make);
}

void Car::setModel(const char model[MAX_STR])
{
	
	strcpy(this->model, model);
}

void Car::setColor(const char color[MAX_STR])
{
	strcpy(this->color, color);
}

void Car::setInStock(int inStock)
{
	this->inStock = inStock;
}

void Car::setYear(int year)
{	
		if(year >= 0)
		{
			this->year = year;

		}	
		else
		{
			cout << "Invalid year.  Needs to ";
			cout << "be larger than or equal to 0." << endl;
 			
		}
}
