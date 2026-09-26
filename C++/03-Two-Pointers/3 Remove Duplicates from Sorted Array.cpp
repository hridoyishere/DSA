// Remove Duplicates from Sorted Array (Two Pointers)
// Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.
// example: arr[] = {1, 1, 1, 1, 2, 2, 2, 3, 3} => output: 3 (and the array becomes {1, 2, 3})

#include <iostream>
using namespace std;

int RemveDuplicates(int arr[], int size)
{
    int j = 0;
    for (int i = 1; i < size ; i++)
    {
        if (arr[j] != arr[i])
        {
            j++;
            arr[j] = arr[i];
        };
    };
    return j + 1;
};

int main()
{
    int array[] = {1, 1, 1, 2, 2, 2, 3, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int newArrSize = RemveDuplicates(array, size);
    for (int i = 0; i < newArrSize; i++)
    {
        cout << array[i] << "";
    };
};