#include <iostream>
using namespace std;
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
	cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapNumbers(&x, &y);
    cout << "After Swap:  x = " << x << ", y = " << y << endl;
    int size;
    cout << "\nEnter array size: ";
    cin >> size;
	 int *arr = new int[size];
	 cout << "Enter " << size << " values:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nYou entered: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";


    delete[] arr;

    return 0;
}

