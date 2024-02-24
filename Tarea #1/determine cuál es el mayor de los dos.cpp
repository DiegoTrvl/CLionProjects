#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Por favor, ingresa el primer número: ";
    std::cin >> num1;
    std::cout << "Por favor, ingresa el segundo número: ";
    std::cin >> num2;

    if (num1 > num2) {
        std::cout << num1 << " es mayor que " << num2 << ".\n";
    } else if (num1 < num2) {
        std::cout << num2 << " es mayor que " << num1 << ".\n";
    } else {
        std::cout << "Ambos números son iguales.\n";
    }

    return 0;
}
