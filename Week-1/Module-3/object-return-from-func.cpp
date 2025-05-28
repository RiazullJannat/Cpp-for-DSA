#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    Student(int roll, int cls)
    {
        this->cls = cls;
        this->roll = roll;
    }
};
Student fun()
{
    Student rjannat(20, 10);
    return rjannat;
}
int main()
{
    Student riaz = fun();
    cout << riaz.cls << ' ' << riaz.roll;
    return 0;
}