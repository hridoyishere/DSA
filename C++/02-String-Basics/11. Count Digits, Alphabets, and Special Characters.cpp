// Count Digits, Alphabets, and Special Characters
//Example:

// "abc123@!" 
// alphabets = 3
// digits = 3
// special = 2

#include <iostream>
#include <string>

using namespace std;

void check(string t,int n){

    int alphabets = 0;
    int digits = 0;
    int special = 0;

    for (int i =0; i< n; i++){
        if((t[i] >= 'a' && t[i]<='z') ||  (t[i] >= 'A' && t[i] <= 'Z')){

            alphabets++;

        }else if (t[i] >= '0' && t[i] <= '9') {

            digits++;

        } else {

            special++;

        }
    }

    cout << "alphabets = " << alphabets << endl;
    cout << "digits = " << digits << endl;
    cout << "special = " << special << endl;
}

int main(){
    string text ="abc123@!";
    check(text,text.length());
    return 0;
}