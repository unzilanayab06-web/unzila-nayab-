#include <iostream>
using namespace std;
int main() {
    int n, upto;
    cout << "Enter number for table: ";
    cin >> n;
    cout << "Print table up to (e.g., 10): ";
    cin >> upto;

    if (upto <= 0) {
        cout << "Please enter a positive number for range.\n";
        return 0;
    }

    for (int i = 1; i <= upto; ++i) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }

    return 0;
}

