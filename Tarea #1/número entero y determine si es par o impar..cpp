#include <iostream>

int main() {
    int num;
    std::cout << "Por favor, ingresa un número entero: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "El número " << num << " es par.\n";
    } else {
        std::cout << "El número " << num << " es impar.\n";
    }

    return 0;
}
