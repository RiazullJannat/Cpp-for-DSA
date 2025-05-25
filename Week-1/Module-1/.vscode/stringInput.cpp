#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char str[101];
    cin.ignore();
    cin.getline(str, 100);
    cout << str;
    return 0;
}