#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int number;
    cin >> number;
    int minutes = number / 60;
    int hours = minutes / 60;
    minutes -= hours * 60;
    number = number - (minutes * 60 + hours * 60 * 60);
    if (hours > 10)
    {
        cout << hours;
    }
    else
    {
        cout << "0" << hours;
    }
    if (minutes > 10)
    {
        cout << ":" << minutes;
    }
    else
    {
        cout << ":0" << minutes;
    }
    if (number > 10)
    {
        cout<<":" << number;
    }
    else
    {
        cout << ":0" << number;
    }
}
