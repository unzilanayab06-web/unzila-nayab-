#include <iostream>
using namespace std;
int main() {
    string name;
    int roll;
    float gpa;

    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter details of student " << i << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll;
        cout << "GPA: ";
        cin >> gpa;

        cout << "\nStudent " << i << " Information:\n";
        cout << "Name: " << name << ", Roll: " << roll << ", GPA: " << gpa << endl;
    }
    return 0;
}

