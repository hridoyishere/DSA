#include <iostream>
using namespace std;

void MOVEZEROS(int arr[], int size)
{
    int ind = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[ind] = arr[i];
            ind++;
        };
    };
    while (ind < size)
    {
        arr[ind] = 0;
        ind++;
    };
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    MOVEZEROS(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    };
};