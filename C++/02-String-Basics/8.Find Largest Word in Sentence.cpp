// Find Largest Word in Sentence
// taxt = "I love programming"
// output = programming

#include <iostream>
#include <string>

using namespace std;

int main() {

    string text = "I love programming";

    string word = "";
    string largest = "";

    for (int i = 0; i < text.length(); i++) {

        if (text[i] != ' ') {
            word += text[i];
        } else {
            if (word.length() > largest.length()) {
                largest = word;
            }
            word = "";
        }
    }


    if (word.length() > largest.length()) {
        largest = word;
    }
    cout << "Largest word is: " << largest;
    return 0;
}