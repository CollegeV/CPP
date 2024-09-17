#include<iostream>
using namespace std;

int main(){
    int *arr, n, temp, hPos;
    cout << "Enter the number of elements: ";
    cin >> n;
     
    arr = (int*)malloc(sizeof(int) * n);


    for(int i = 0; i < n; i++){
        cout << "Enter next element: ";
        cin >> *(arr + i);
    }

    cout << "Before sortiing: \n";
    for(int i = 0; i < n; i++){
        cout << *(arr + i) << "\t";
    }

    for (int i = 0; i < n; i++){
        hPos = 0;
        for (int j = 0; j < n-i; j++){
            if (*(arr + hPos) < *(arr + j)){
                hPos = j;
            }
        }
        cout << "\n Highest: " << *(arr + hPos) << "\n";
        cout << *(arr + n - i);5
        
        // temp = *(arr + hPos);
        // *(arr + hPos) = *(arr + n - i);
        // *(arr + n - i) = temp;
    }

    cout << "\nAfter sortiing: \n";
    for(int i = 0; i < n; i++){
        cout << *(arr + i) << "\t";
    }

    return 0;
}