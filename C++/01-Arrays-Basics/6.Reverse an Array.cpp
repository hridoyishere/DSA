// Reverse an Array
//example: arr[] = {10, 5, 8, 20, 3} => output: {3, 20, 8, 5, 10}


#include <iostream>
using namespace std;

void Reverse(int arr[], int n) {

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[] = {10, 5, 8, 20, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Reversed array is: ";

    Reverse(arr, n);

    return 0;
}