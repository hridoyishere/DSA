// Sort The array
// Example arr[] = {8, 6, 4, 6, 66, 7, 3, 2, 4, 4, 44};
// output= 2 3 4 4 4 6 6 7 8 44 66

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {8, 6, 4, 6, 66, 7, 3, 2, 4, 4, 44};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}