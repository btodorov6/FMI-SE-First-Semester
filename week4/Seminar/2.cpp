#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int choice = 0;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Circle" << endl;
		int r;
		cout << "Radius:";
		cin >> r;
		cout <<"Surface area:" << 3.14159 * r * r;
	}
	if (choice == 2)
	{
		cout << "Rectangle"<<endl;
		int a;
		int b;
		cout << "Side a:";
		cin >> a;
		cout << "Side b:";
		cin >> b;
		cout << "Surface area:" << a * b;
	}
	if (choice == 3)
	{
		cout << "Triangle"<<endl;
		int a;
		int h;
		cout << "Side a:";
		cin >> a ;
		cout << "visochina h:";
		cin >> h;
		cout << "Surface area:" << (a * h) / 2;
	}

}
