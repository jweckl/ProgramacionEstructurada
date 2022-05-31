#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int valor1, valor2, valor3;
    system("cls");
    printf("\nIngrese el primer valor: ");
    scanf("%d", &valor1);
    printf("\nIngrese el segundo valor: ");
    scanf("%d", &valor2);
    printf("\nIngrese el tercer valor: ");
    scanf("%d", &valor3);

    printf("La suma de los valores es: %d\n", valor1 + valor2 + valor3);

    float promedio = (float) (valor1 + valor2 + valor3) / 3;
    printf("El promedio de los valores es: %f\n", promedio);

    if (valor1 > promedio) {
        printf("%d es mayor al promedio (valor1) \n", valor1);
    }

    if (valor2 > promedio) {
        printf(" %d es mayor al promedio (valor2)\n", valor2);
    }

    if (valor3 > promedio) {
        printf("%d es mayor al promedio (valor3)\n", valor3);
    }

    system("pause");
    return 0;
}
