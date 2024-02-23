#include <iostream>

int main() {
    int numero;
    std::cout << "Introduce un número: ";
    std::cin >> numero;

    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " * " << i << " = " << numero * i << std::endl;
    }

    return 0;
}
