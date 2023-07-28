#include <iostream>
using namespace std;
struct student
{
    int rollno;
    char name[40];
    float marks;
};
union money
{
    int rupee;
    int pound;
    float gold;
}

int
main()
{
    struct student class12[30];
    union money n1;
    n1.gold = 9.6 enum meal { breakfast,
                              lunch,
                              dinner };
    cout << breakfast;
    cout << lunch;
    cout << dinner;
    cout << "you have" << n1.gold << "kg gold in form of money" << endl;
    int n;
    cout << "enter no of student in class12" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter name of" << i + 1 << "student";
        cin >> class12[i].name;
        cout << "enter roll no of" << i + 1 << "student";
        cin >> class12[i].rollno;
        cout << "enter marks of" << i + 1 << "student";
        cin >> class12[i].marks;
    }
    cout << "student details" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "enter name of" << i + 1 << "student" << class12[i].name << endl;
        cout << "enter roll no of" << i + 1 << "student" << class12[i].rollno << endl;
        cout << "enter marks of" << i + 1 << "student" << class12[i].marks;
    }
    return 0;
}