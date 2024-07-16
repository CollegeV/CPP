#include <iostream>

int main() {
    int a[6], dPos;
    std::cout << "Please enter the 6 elements,\n";
    for(int i = 0; i < 6; i++){
        std::cout << "Enter element " << i << ": ";
        std::cin >> a[i];
    }

    std::cout << "Array before deletion is :\n";
    for(int i = 0; i < 6; i++){
        std::cout << "a[" << i << "] = " << a[i] << "\n";
    }
    std::cout << "Enter where you want to delete (b/w 0 and 5):";
    std::cin >> dPos;

    for (int i = dPos; i < 6; i++ ){
        a[i] = a[i+1];
    }

    std::cout << "Array after deletion is :\n";
    for(int i = 0; i < 5; i++){
        std::cout << "a[" << i << "] = " << a[i] << "\n";
    }

    return 0;
}