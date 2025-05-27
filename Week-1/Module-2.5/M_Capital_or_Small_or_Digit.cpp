#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if ((int)x < 64)
    {
        cout << "IS DIGIT";
    }
    else if ((int)x < 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else 
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    return 0;
}