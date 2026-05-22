// Rotate Array
// examaple arr=[1,2,3,4,5,6,7,8,9,10,11]; output= 11,10,9,8,7,6,5,4,3,2,1


#include <iostream>
using namespace std;


void Reverse ( int arr[],int n){
    int newArr[n];

    for (int i=n-1; i >-1; i--){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,5,6,7,8,9,10,11};
    int n= sizeof(arr) / sizeof(arr[0]);

    cout << "the Rotate array is :";

    Reverse(arr,n);

    return 0;
}