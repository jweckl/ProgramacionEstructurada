#include <stdio.h>

// Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros

int main() {

    int val = 0, cantc = 0, sumapos = 0, sumaneg = 0, cantpos = 0, cantneg = 0;
    float promp = 0, promn = 0;
    char decision;


    printf("Desea ingresar un valor? (S/N) \n");
    scanf("%c", &decision);

    while (decision == 'S' || decision == 's') {

        printf("Ingrese un valor: ");
        scanf("%d", &val);

        if (val > 0) {
            sumapos += val;
            cantpos++;
        }
        if (val < 0) {
            sumaneg += val;
            cantneg++;
        }
        if (val == 0) {
            cantc++;
        }

        fflush(stdin);
        printf("Desea ingresar otro valor? (S/N) \n");
        scanf("%c", &decision);

    }

    promp = (float) (sumapos / cantpos);
    promn = (float) (sumaneg / cantneg);

    printf("El promedio de numeros positivos es de %.2f\n", promp);
    printf("El promedio de numeros negativos es de %.2f\n", promn);
    printf("La cantidad de ceros ingresados es de %d\n", cantc);


    return 0;
}
