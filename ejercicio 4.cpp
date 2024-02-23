#include <iostream>

// Función para verificar si un número es par
bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int numero;
    std::cout << "Introduce un número: ";
    std::cin >> numero;

    if (esPar(numero))
        std::cout << "El número " << numero << " es par." << std::endl;
    else
        std::cout << "El número " << numero << " no es par." << std::endl;

    return 0;
}
