#include <iostream>

int main() {
    int a[6], insertPos, e;
    std::cout << "Please enter the first 5 elements,\n";
    for(int i = 0; i < 5; i++){
        std::cout << "Enter element " << i << ": ";
        std::cin >> a[i];
    }

    std::cout << "Enter where you want to insert (b/w 0 and 5):";
    std::cin >> insertPos;

    std::cout << "Enter the element you want to insert: ";
    std::cin >> e;
    for (int i = 5; i >= insertPos; i-- ){
        a[i] = a[i-1];
    }
    a[insertPos] = e;

    std::cout << "Array after insertion is :\n";
    for(int i = 0; i < 6; i++){
        std::cout << "a[" << i << "] = " << a[i] << "\n";
    }

    return 0;
}