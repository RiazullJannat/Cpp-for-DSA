#include <bits/stdc++.h>
using namespace std;
int *location;
void fun()
{
    int *x = new int;
    *x = 100; 
    location = x;
    cout << "fun-> " << *x << endl;
    return;
}
int main()
{
    fun();
    cout << "main-> " << *location;
}