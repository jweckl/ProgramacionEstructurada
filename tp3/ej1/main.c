#include <stdio.h>

// Ingresar 25 números, calcular su promedio e imprimirlo

int main() {
    int num = 0, tnum = 0, i = 0;
    float prom = 0;

    for (i = 1; i <= 25; i++) {
        printf("Ingrese un numero entero: \n");
        scanf("%d", &num);

        tnum += num;
    }

    prom = (float) (tnum / 25);
    printf("El promedio de los valores totales es de %f", prom);

    return 0;
}
