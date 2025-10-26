
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;

    return 0;
}

