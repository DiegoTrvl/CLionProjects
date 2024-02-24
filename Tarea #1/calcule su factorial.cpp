#include <iostream>

int main() {
    int num;
    std::cout << "Por favor, ingresa un número: ";
    std::cin >> num;

    long long factorial = 1;
    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }

    std::cout << "El factorial de " << num << " es " << factorial << ".\n";

    return 0;
}
