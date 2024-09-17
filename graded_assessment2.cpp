/*
Millions of enquires are processed by search engines every second.
The task in hand is is refining a search algorithm, that divides info
into two sections, and conducts recursive search, in one of the section
using predetermined criterion?
*/


#include<iostream>

using namespace std;

int Information[10] = {
    10, 11, 12, 55, 67, 77, 89, 95, 98, 99
};

// Arr is in ascendigng order.
int search(int arr[10], int n, int low, int high){
    // Pre-Determined Criteria Here
    if (n < 10 || n > 100){
        return -1;
    }
    // Ends here

    int mid = (high + low)/2;

    if (high == low && arr[mid] != n){
        return -1;
    }

    if (arr[mid] == n){
        return mid;
    }else if(n > arr[mid]){
        return search(arr, n, mid, high);
    }else{
        return search(arr, n, low, mid);
    }
}


int main(){
    int n;
    cout << "Enter number to search: ";
    cin >> n;
    int result = search(Information, n, 0, 9);
    if (result == -1){
        cout << "Element not found in the information.";
    }else{
        cout << "Element found at: " << result + 1 << " Position";
    }
    return 0;
}