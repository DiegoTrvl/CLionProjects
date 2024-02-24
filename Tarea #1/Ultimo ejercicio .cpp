#include <iostream>

int main() {
    int opcion;
    std::cout << "Por favor, selecciona una opción:\n";
    std::cout << "1. Determinar si un número es par o impar.\n";
    std::cout << "2. Determinar si un número es mayor o menor que otro número.\n";
    std::cout << "3. Calcular el factorial de un número.\n";
    std::cout << "4. Mostrar todos los números impares hasta un número dado.\n";
    std::cout << "5. Determinar el día de la semana correspondiente a un número.\n";
    std::cin >> opcion;

    switch (opcion) {
        case 1: {
            int num;
            std::cout << "Por favor, ingresa un número entero: ";
            std::cin >> num;

            if (num % 2 == 0) {
                std::cout << "El número " << num << " es par.\n";
            } else {
                std::cout << "El número " << num << " es impar.\n";
            }
            break;
        }
        case 2: {
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
            break;
        }
        case 3: {
            int num;
            std::cout << "Por favor, ingresa un número: ";
            std::cin >> num;

            long long factorial = 1;
            int i = 1;
            while (i <= num) {
                factorial *= i;
                i++;
            }

            std::cout << "El factorial de " << num << " es " << factorial << ".\n";
            break;
        }
        case 4: {
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
            break;
        }
        case 5: {
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
            break;
        }
        default:
            std::cout << "La opción seleccionada no es válida.\n";
            break;
    }

    return 0;
}
