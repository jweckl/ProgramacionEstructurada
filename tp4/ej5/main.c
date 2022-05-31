#include <stdio.h>

// Ingresar temperatura shasta una temperatura igual a 1000, indicar e imprmir la mayor y menor

int main() {

    float temp, max, min;
    int cont = 1;

    printf("Ingrese la temperatura actual en grados centigrados >");
    scanf("%f", &temp);

    while (temp < 1000) {

        if (cont == 1) {
            max = temp;
            min = temp;
        } else {
            if (temp > max) {
                max = temp;
            }
            if (temp < min) {
                min = temp;
            }
        }

        cont++;

        printf("Ingrese la temperatura actual en grados centigrados  >");
        scanf("%f", &temp);
    }

    cont--;

    printf("\nLa temperatura minima ingresada es de %f", min);
    printf("\nLa temperatura maxima ingresada es de %f", max);

    return 0;
}
