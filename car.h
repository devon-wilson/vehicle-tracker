#ifndef CAR_H
#define CAR_H
const int MAX_STR = 200;
class Car 
{
	public:
		void print();
		void getMake(char[MAX_STR]);
		void getModel(char[MAX_STR]);
		void getColor(char[MAX_STR]);
		int getYear();
		int getInStock();
		void setMake(const char[MAX_STR]);
		void setModel(const char[MAX_STR]);
		void setColor(const char[MAX_STR]);
		void setYear(int);
		void setInStock(int);
		Car();
		Car(char make[MAX_STR], char model[MAX_STR], char color[MAX_STR], int year, int inStock);
	private:
		char make[MAX_STR];
		char model[MAX_STR];
		char color[MAX_STR];
		int inStock;
		int year;
};

#endif
