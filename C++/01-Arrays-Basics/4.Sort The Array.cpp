// Sort The array 
// Example arr[] = {8, 6, 4, 6, 66, 7, 3, 2, 4, 4, 44};
// output= 2 3 4 4 4 6 6 7 8 44 66


#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int arr[] = {8, 6, 4, 6, 66, 7, 3, 2, 4, 4, 44};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}