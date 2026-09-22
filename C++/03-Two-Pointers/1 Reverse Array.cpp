// Reverse Array (Two Pointers)
// Given an array, reverse the array in place using the two pointers technique.
// example: arr[] = {1, 2, 3, 4, 5} => output: {5, 4, 3, 2, 1}

#include <iostream>
using namespace std;

void Revers(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int temp = arr[left];

        arr[left] = arr[right];

        arr[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    Revers(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}