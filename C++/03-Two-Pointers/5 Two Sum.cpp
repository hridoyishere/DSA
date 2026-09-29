// Two Sum (Two Pointers)
// Given an array of integers and a target sum,
// find two numbers in the array that add up to the target sum.
// example: nums[] = {2, 7, 11, 15}, target = 9 =>
// output: {0, 1} (indices of the two numbers)

#include <iostream>
#include <utility>
using namespace std;

pair<int, int> TowSum(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        int need = target - arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == need)
            {
                return {i, j};
            };
        };
    };
    return {-1, -1};
};

int main()
{
    int arr[] = {2, 7, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    pair<int, int> result = TowSum(arr, size, target);

    cout << result.first << " " << result.second;
    return 0;
}