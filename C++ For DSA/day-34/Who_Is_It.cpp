#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};
int main()
{
    // Write your code here
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;
        // assuming a is topper

        Student top = a;
        // Compare with b
        if (b.marks > top.marks || (b.marks == top.marks && b.id < top.id))
        {
            top = b;
        }

        // Compare with c
        if (c.marks > top.marks || (c.marks == top.marks && c.id < top.id))
        {
            top = c;
        }

        cout << top.id << " " << top.name << " " << top.section << " " << top.marks << endl;
    }

    return 0;
}
