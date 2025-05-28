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
    Student rj, r;
    cin.getline(rj.name, 100);
    cin >> rj.roll >> rj.section;
    cin.ignore();
    cin.getline(r.name, 100);
    cin >> r.roll >> r.section;
    cout << "Name: " << rj.name << "\nRoll: " << rj.roll << "\nSection: " << rj.section << endl;
    cout << "Name: " << r.name << "\nRoll: " << r.roll << "\nSection: " << r.section << endl;
}