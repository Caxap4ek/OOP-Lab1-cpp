#include <iostream>
#include "Header.h"
#include <math.h>
using namespace std;

int main()
{
	//ініціалізуємо координати вершин
	Rectangle A;
	cout << "Enter the first coordinate of the first vertex" << endl << "x1 - ";
	cin >> A.x;
	cout << "Enter the second coordinate of the first vertex" << endl << "y1 - ";
	cin >> A.y;
	Rectangle B;
	cout << "Enter the first coordinate of the second vertex" << endl << "x2 - ";
	cin >> B.x;
	cout << "Enter the second coordinate of the second vertex" << endl << "y2 - ";
	cin >> B.y;
	Rectangle C;
	cout << "Enter the first coordinate of the third vertex" << endl << "x3 - ";
	cin >> C.x;
	cout << "Enter the second coordinate of the third vertex" << endl << "y3 - ";
	cin >> C.y;
	Rectangle D;
	cout << "Enter the first coordinate of the fourth vertex" << endl << "x4 - ";
	cin >> D.x;
	cout << "Enter the second coordinate of the fourth vertex" << endl << "y4 - ";
	cin >> D.y;
	cout << "*************************************" << endl;
	//знаходимо довжини сторін
	double AB = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
	cout << "AB = " << AB << endl;
	double BC = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
	cout << "BC = " << BC << endl;
	double CD = sqrt((D.x - C.x) * (D.x - C.x) + (D.y - C.y) * (D.y - C.y));
	cout << "CD = " << CD << endl;
	double AD = sqrt((D.x - A.x) * (D.x - A.x) + (D.y - A.y) * (D.y - A.y));
	cout << "AD = " << AD << endl;
	cout << "*************************************" << endl;
	//перевіряємо чи є створений нами чотирикутник паралелепіпедом
	if (AB != CD && AD != BC)
	{
		cout << "Еhe resulting figure is not a rectangle." << endl;
		return 0;
	}
	//перевіряємо чи є створений нами паралелепіпед прямокутником
	int cosABxBc = (A.x * B.x + A.y * B.y) / (AB * BC);
	if (cosABxBc != 0)
	{
		cout << "Еhe resulting figure is not a rectangle." << endl;
		return 0;
	}
	else
		cout << "Congratulations!!! This is a rectangle :)" << endl;
    cout << "*************************************" << endl;
	int choice;
	double area = 0;
	double per = 0;

	cout << "If you want to calculate a perimeter, write 1" << endl;
	cout << "If you want to calculate an area, write 2" << endl;
	cout << "Enter 0 to end the program" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:

		//шукаємо периметр прямокутника
		per = A.Perimeter(AB, BC);
		cout << "The perimeter of the rectangle is equal - " << per << endl;
		cout << "*************************************" << endl;
		     cout << "If you want to calculate a perimeter, write 1" << endl;
	cout << "If you want to calculate an area, write 2" << endl;
	cout << "Enter 0 to end the program" << endl;
	cin >> choice;
		  
	case 2:
		//шукаємо площу трикутника
		area = A.Area(AB, BC);
		cout << "The area of the rectangle is equal - " << area << endl;
		cout << "*************************************" << endl;  
		     cout << "If you want to calculate a perimeter, write 1" << endl;
	cout << "If you want to calculate an area, write 2" << endl;
	cout << "Enter 0 to end the program" << endl;
	cin >> choice;
     case 0:
	   	break;
 	default: 
        cout << "There is no such choice." << endl;
        cout << "*************************************" << endl;  
		cout << "If you want to calculate a perimeter, write 1" << endl;
		cout << "If you want to calculate an area, write 2" << endl;
		cout << "Enter 0 to end the program" << endl;
		cin >> choice;
	}
	return 0;
}
