#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            cout << "  ";
        }
        for (int j = 65; j <= 65 + i; j++)
        {
            cout << (char)j << " ";
        }
        for (int j = 64+i; j >= 65; j--)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}