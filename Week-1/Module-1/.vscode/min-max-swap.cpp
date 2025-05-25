#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a = 10, b = 20;
    cout << min(a, b) << endl;
    cout << max(a, b) << endl;
    swap(a, b);
    cout << a << ' ' << b << endl;
}