#include <iostream>
#include <cmath>

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int numero;
    std::cout << "Introduce un número: ";
    std::cin >> numero;

    if (esPrimo(numero))
        std::cout << "El número " << numero << " es primo." << std::endl;
    else
        std::cout << "El número " << numero << " no es primo." << std::endl;

    return 0;
}
