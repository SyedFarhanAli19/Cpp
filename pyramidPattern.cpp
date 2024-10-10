#include<iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter input" << endl;
    cin >> input;
    for (int i = 0; i <= input; i++)
    {
        for (int j = 0; j < (input - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << "*";
        }
       cout << endl; 
    }
    return 0;
}