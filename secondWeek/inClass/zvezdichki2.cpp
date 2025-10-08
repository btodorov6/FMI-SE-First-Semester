#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int stars = (n-1)*2 +1;
    int spacesOnEachSide = 0;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < spacesOnEachSide;j++)
        {
            cout << " ";
        }
        for (int f = 0;f < stars;f++)
        {
            cout << '*';
        }
        for (int j = 0;j < spacesOnEachSide;j++)
        {
            cout << " ";
        }
        stars -= 2;
        spacesOnEachSide++;
        cout << endl;
    }
}
