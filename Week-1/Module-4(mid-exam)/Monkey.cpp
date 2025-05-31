#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[100001];
    while (cin.getline(c, 100001))
    {
        char temp[100001];
        long long int j = 0;
        for (long long int i = 0; i < (long long int)strlen(c); i++)
        {
            if (c[i] != ' ')
            {
                temp[j] = c[i];
                j++;
            }
        }
        temp[j] = '\0';
        sort(temp, temp + j);
        cout << temp << endl;
    }
    return 0;
}