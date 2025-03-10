#include <iostream>
#include <algorithm> 


void printMax(int a, int b) {
    std::cout << std::max(a, b) << std::endl;
}

int main() {
    int num1, num2;
    

    std::cin >> num1 >> num2;


    printMax(num1, num2);

    return 0;
}
