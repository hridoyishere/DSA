// Two Sum (Two Pointers)
// Given an array of integers and a target sum,
// find two numbers in the array that add up to the target sum.
// example: nums[] = {2, 7, 11, 15}, target = 9 =>
// output: {0, 1} (indices of the two numbers)

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

pair<int, int> twoSum(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
            return {left, right};
        else if (sum < target)
            left++;
        else
            right--;
    }
    return {-1, -1};
}

int main()
{
    int arr[] = {2, 7, 11, 15}; // already sorted
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    pair<int, int> result = twoSum(arr, size, target);
    cout << result.first << " " << result.second;
    return 0;
}