#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    char section;
    double gpa;
    Student(int r, char s, double g)
    {
        roll = r;
        section = s;
        gpa = g;
    }
};
int main()
{
    Student rjannat(1, 'a', 5.00);
    cout << rjannat.roll << " " << rjannat.section << " " << rjannat.gpa;
    return 0;
}