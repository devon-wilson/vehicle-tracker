#include <cstdlib>
#include <iostream>
#include <cstring>
#include "car.h"

using namespace std;

int main()
{	
  //Car array[2];  // note that this uses the default constructor
  int carSize;
  char make[MAX_STR];
  char model[MAX_STR];
  char color[MAX_STR];
  int  inStock;
  int year;
  Car array[2];
  cout << "Just after array is created" << endl;
  for(int i=0; i<2; i++)
  {
	  cout << "printing " << i << " car in array" << endl;
	  array[i].print();
  }
  strcpy(make, "Toyota");
  strcpy(model, "Camry");
  strcpy(color, "silver");
  // note that this uses the non-default constructor
  Car sedan1(make, model, color, 2017, 10); 
  
  cout << "Printing the sedan1 info " << endl;
  sedan1.print();
  
  cout << "Changing year total to -2017 (this should print an error and not change the value)" << endl;
  sedan1.setYear(-2017);
  cout << "year is now " << sedan1.getYear() << endl;
  
  cout << "Changing in stock total to -3 (this should print an error and not change the value)" << endl;
  sedan1.setInStock(-3);
  cout << "in stock total is now " << sedan1.getInStock() << endl;
  
  cout << "setting array values and getting values of array" << endl;
  for(int i=0; i<2; i++)
  {
	  cout << "for car " << i << endl;
	  cout << "make? ";
	  cin.getline(make, MAX_STR);
	  array[i].setMake(make);
	  cout << "model? ";
	  cin.getline(model, MAX_STR);
	  array[i].setModel(model);
	  cout << "color? ";
	  cin.getline(color, MAX_STR);
	  array[i].setColor(color);
	  cout << "year? ";
	  cin >> year;
	  cin.ignore();
	  array[i].setYear(year);
	  cout << "how many in stock? ";
	  cin >> inStock;
	  cin.ignore();
	  array[i].setInStock(inStock);
  }
  
  for(int i=0; i<2; i++)
  {
	  // Using getters to get information to print.
	  cout << "getting car " << i << " information with getters" << endl;
	  array[i].getMake(make);
	  cout << "make: " << make << endl;
	  array[i].getModel(model);
	  cout << "model: " << model << endl;
	  array[i].getColor(color);
	  cout << "color: " << color << endl;
	  cout << "year: " << array[i].getYear() << endl;
	  cout << "in stock total: " << array[i].getInStock() << endl;
	  
	  //Using a print function which is a member of the class Car
	  //This is a better solution but wanted to have students practice
	  // using getters.
	  cout << "printing car " << i << " information again" << endl;
	  array[i].print();
  }
  
  return 0;
}
