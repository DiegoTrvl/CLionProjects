#include <iostream>

int main() {
    int num;
    std::cout << "Por favor, ingresa un número mayor a 10 y menor que 30: ";
    std::cin >> num;

    if (num <= 10 || num >= 30) {
        std::cout << "El número ingresado no está en el rango solicitado.\n";
        return 0;
    }

    std::cout << "Los números impares desde 1 hasta " << num << " son:\n";
    int i = 1;
    while (i <= num) {
        if (i % 2 != 0) {
            std::cout << i << "\n";
        }
        i++;
    }

    return 0;
}
