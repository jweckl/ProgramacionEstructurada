#include <stdio.h>

// Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20,
// cuantos entre 20 y 30 y cuantos son mas de 30.
// Luego mostrar el porcentaje de cada grupo en el total.

int main() {
    int num = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    float por1, por2, por3, por4;

    for (int i = 1; i <= 30; i++) {
        printf("Ingrese 30 valores enteros: \n");
        scanf("%d", &num);

        if (num >= 1 && num <= 10) {
            count1++;
        }

        if (num >= 10 && num <= 20) {
            count2++;
        }

        if (num >= 20 && num <= 30) {
            count3++;
        }

        if (num > 30) {
            count4++;
        }
    }

    printf("El total de numeros entre 1 y 10 es %d\n", count1);
    printf("El total de numeros entre 10 y 20 es %d\n", count2);
    printf("El total de numeros entre 20 y 30 es %d\n", count3);
    printf("El total de numeros mayores a 30 es %d\n", count4);

    por1 = (float) (count1 * 3.33333333333);
    por2 = (float) (count2 * 3.33333333333);
    por3 = (float) (count3 * 3.33333333333);
    por4 = (float) (count4 * 3.33333333333);

    printf("El porcentaje de numeros entre 1 y 10 es %.2f %\n", por1);
    printf("El porcentaje de numeros entre 10 y 20 es %.2f %\n", por2);
    printf("El porcentaje de numeros entre 20 y 30 es %.2f %\n", por3);
    printf("El porcentaje de numeros mayores a 30 es %.2f %\n", por4);

    return 0;
}