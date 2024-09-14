#include <iostream>
#include <conio.h>

using namespace std;
//Rectangle Area assignment C++
//Christian Hegner


// function prototypes
double getLengthFromUser();
double getWidthFromUser();
double calculateArea(double length, double width);
void displayArea(double);


//program start
int main() 
{
	double rectangleLength = getLengthFromUser();
	double rectangleWidth = getWidthFromUser();
	double rectangleArea = calculateArea(rectangleLength, rectangleWidth);
	displayArea(rectangleArea);

	(void)_getch();
	return 0;
}

double getLengthFromUser()
{
	double value = 0;
	while (value == 0)
	{
		cout << "Enter a rectangle length: \n";
		cin >> value;
	}
	return value;
}
double getWidthFromUser()
{
	double value = 0;
	while (value == 0)
	{
		cout << "Enter a rectangle width: \n";
		cin >> value;
	}
	return value;
}
double calculateArea(double length, double width)
{
	double value = length * width;
	
	return value;
}
void displayArea(double rectangleArea) 
{
	cout << "Your rectangle's area is " << rectangleArea << ".";
}