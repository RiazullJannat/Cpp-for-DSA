#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    char section;
    double gpa;
    Student(int roll, int cls, char section, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->section = section;
        this->gpa = gpa;
    }
};
int main()
{
    Student riaz(10, 5, 'a', 4.44);
    cout << riaz.cls << " " << riaz.gpa << " " << riaz.roll << " " << riaz.section << endl;
    return 0;
}