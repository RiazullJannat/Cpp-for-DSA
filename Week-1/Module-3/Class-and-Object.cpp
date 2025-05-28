#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    char section;
};
int main()
{
    Student rj;
    char temp[100] = "Rjannat";
    strcpy(rj.name, temp);
    rj.roll = 1;
    rj.section = 'a';
    cout << "Name: " << rj.name << "\nRoll: " << rj.roll << "\nSection: " << rj.section;
}