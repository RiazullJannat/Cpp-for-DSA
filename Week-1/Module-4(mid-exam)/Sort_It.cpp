#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array+n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout << array[i] << ' ';
    }
    return 0;
}