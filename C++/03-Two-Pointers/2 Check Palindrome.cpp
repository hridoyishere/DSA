// Check Palindrome (Two Pointers)
// Given a string, check if it is a palindrome using the two pointers technique.
// example: str = "racecar" => output: true

#include <iostream>
#include <string>
using namespace std;

bool Check_Palindrome(string str)
{
    int left = 0;
    int right = str.size() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        };
        left++;
        right--;
    };
    return true;
}

int main()
{
    string str = "level";

    cout << Check_Palindrome(str);
}