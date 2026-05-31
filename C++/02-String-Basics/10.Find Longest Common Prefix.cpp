// Find Longest Common Prefix
// ["flower","flow","flight"]
// output = "fl"

#include <iostream>
#include <string>

using namespace std;

int main() {

    string arr[] = {"flower", "flow", "flight"};
    int n = 3;
    string prefix = arr[0];

    for (int i = 1; i < n; i++) {

        string temp = "";

        for (int j = 0; j < prefix.length() && j < arr[i].length(); j++) {

            if (prefix[j] == arr[i][j]) {
                temp += prefix[j];
            } else {
                break;
            }
        }
        prefix = temp;
    }
    cout << "Longest Common Prefix: " << prefix;

    return 0;
}