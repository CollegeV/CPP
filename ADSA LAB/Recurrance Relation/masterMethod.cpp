#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    int logba = log(a)/log(b);

    if(logba > c){
        cout << "Complexity: O(n^"<<logba<<")";
    }else if(logba == c){
        cout << "Complexity: O(n*logb(a)*lg(n))";
    }else{
        cout << "Complexity: O(n^"<<c<<")";
    }
    return 0;
}