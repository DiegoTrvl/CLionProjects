#include <iostream>

// Función para calcular el factorial
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numero;
    std::cout << "Introduce un número: ";
    std::cin >> numero;

    std::cout << "El factorial de " << numero << " es " << factorial(numero) << std::endl;

    return 0;
}
