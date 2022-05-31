#include <stdio.h>
#include <math.h>

// Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar elpromedio de
// lo valores pares y el promedio de los valores impares. Luegomostrar por pantalla cuantos números superaron el valor 15.

int main() {
    int num = 0,
            cuenta15 = 0,
            i = 0,
            sumapar = 0,
            sumaimpar = 0,
            cuentapar = 0,
            cuentaimpar = 0;

    float
            prompar = 0,
            promimpar = 0;

    float prom = 0;

    for (i = 1; i <= 8; i++) {
        printf("Ingrese un numero entero: \n");
        scanf("%d", &num);

        if (fmod(num, 2) == 0) {
            sumapar = sumapar + num;
            cuentapar++;
        } else {
            sumaimpar = sumaimpar + num;
            cuentaimpar++;
        }

        if (num > 15) {
            cuenta15++;
        }
    }

    prom = (float) ((sumapar + sumaimpar) / 8);
    prompar = (float) (sumapar / cuentapar);
    promimpar = (float) (sumaimpar / cuentaimpar);

    printf("El promedio general de los valores totales es de %f\n", prom);
    printf("El promedio de los valores pares es de %f\n", prompar);
    printf("El promedio de los valores impares es de %f\n", promimpar);
    printf("La cantidad de valores que superaron el numero 15 son %d\n", cuenta15);

    return 0;
}