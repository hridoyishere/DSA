// Remove Spaces From String
// text = "I love programming"
// output ="Iloveprogramming"

#include <iostream>
#include <string>

using namespace std;

int main() {

    string text = "I love programming";

    string result = "";

    for (int i = 0; i < text.length(); i++) {

        if (text[i] != ' ') {
            result += text[i];
        }

    }

    cout << result;

    return 0;
}