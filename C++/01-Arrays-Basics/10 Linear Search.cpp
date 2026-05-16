// Find target in array
// example: arr[] = {1,2,3,4,5,9}; target = 9 ; output = 9

#include <iostream>
using namespace std;

int Find(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == target) {
            return arr[i];
        }
    }

    return -1;
}

int main() {

    int arr[] = {1,2,3,4,5,9};

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = Find(arr, size, 9);

    if (result != -1) {
        cout << "Element found : " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}