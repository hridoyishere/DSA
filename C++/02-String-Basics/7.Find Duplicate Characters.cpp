// Find Duplicate Characters
// Example text = "programming"
// Output = r g m

#include <iostream>
using namespace std;

int main() {

    string text = "programming";

    for (int i = 0; i < text.length(); i++) {

        int count = 0;

        for (int j = i + 1; j < text.length(); j++) {

            if (text[i] == text[j]) {
                count++;
            }

        }

        if (count > 0) {

            bool alreadyPrinted = false;

            for (int k = 0; k < i; k++) {

                if (text[i] == text[k]) {
                    alreadyPrinted = true;
                }

            }

            if (!alreadyPrinted) {
                cout << text[i] << " ";
            }
        }
    }

    return 0;
}