#include <iostream>

void imprimirTabla(int numero) {
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " * " << i << " = " << numero * i << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Tabla del 4:" << std::endl;
    imprimirTabla(4);

    std::cout << "Tabla del 6:" << std::endl;
    imprimirTabla(6);

    return 0;
}

