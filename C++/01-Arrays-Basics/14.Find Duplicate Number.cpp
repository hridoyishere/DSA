#include <iostream>
using namespace std;

int findDuplicateNumber(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {
                return arr[i];
            }

        }
    }

    return -1;
}

int main() {

    int arr[] = {1, 4, 2, 3, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate number is: "
         << findDuplicateNumber(arr, n);

    return 0;
}