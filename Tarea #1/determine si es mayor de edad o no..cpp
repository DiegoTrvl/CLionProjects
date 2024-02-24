#include <iostream>

int main() {
    int edad;
    std::cout << "Por favor, ingresa tu edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Eres mayor de edad.\n";
    } else {
        std::cout << "No eres mayor de edad.\n";
    }

    return 0;
}