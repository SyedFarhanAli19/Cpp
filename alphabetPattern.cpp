#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            char ch = 'A'+i-1;
            j++;
            cout << ch;
        }
        i++;
        cout << endl;
        
    }
    
}