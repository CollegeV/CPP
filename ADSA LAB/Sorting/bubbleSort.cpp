#include<iostream>
using namespace std;

int main(){
    int *arr, n, temp;
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

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            if(*(arr + j) > *(arr + j + 1)){
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    cout << "\nAfter sortiing: \n";
    for(int i = 0; i < n; i++){
        cout << *(arr + i) << "\t";
    }

    return 0;
}