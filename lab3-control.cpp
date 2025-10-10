#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Enter 0 to 100.\n";
        return 0;
    }
    if (marks >= 90) {
        cout << "Grade A\n";
    } else if (marks >= 75) {
        cout << "Grade B\n";
    } else if (marks >= 50) {
        cout << "Grade C\n";
    } else {
        cout << "Grade F\n";
    }
    return 0;
}

