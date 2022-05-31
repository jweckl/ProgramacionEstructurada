#include <stdio.h>

// Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros

int main() {

    int num, cuentapos=0, cuentacero=0, cuentaneg=0, i;

    for (i = 1; i <= 10; i++) {
        printf("Ingrese 10 valores: \n");
        scanf("%d", &num);
        if (num == 0) {
            cuentacero++;
        }
        if (num > 0) {
            cuentapos++;
        }
        if (num < 0) {
            cuentaneg++;
        }
    }

    printf("Dentro de los 10 valores, obtenemos los siguientes resultados:\n"
           "%d cero/s,\n"
           "%d positivo/s,\n"
           "%d negativo/s.\n", cuentacero, cuentapos, cuentaneg);


    return 0;
}
