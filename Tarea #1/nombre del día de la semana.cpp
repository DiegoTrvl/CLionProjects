#include <iostream>

int main() {
    int num;
    std::cout << "Por favor, ingresa un número del 1 al 5: ";
    std::cin >> num;

    switch (num) {
        case 1:
            std::cout << "El día 1 corresponde a Lunes.\n";
            break;
        case 2:
            std::cout << "El día 2 corresponde a Martes.\n";
            break;
        case 3:
            std::cout << "El día 3 corresponde a Miércoles.\n";
            break;
        case 4:
            std::cout << "El día 4 corresponde a Jueves.\n";
            break;
        case 5:
            std::cout << "El día 5 corresponde a Viernes.\n";
            break;
        default:
            std::cout << "El número ingresado no está en el rango solicitado.\n";
            break;
    }

    return 0;
}
