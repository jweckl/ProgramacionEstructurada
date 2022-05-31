#include <stdio.h>

// Sobre el ejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive. imprimir el resultado

int main() {

    int numfac, imp, suma, cont=0;

    printf("Ingrese el numero de factura: \n");
    scanf("%d", &numfac);

    while (numfac != 0) {

        printf("Ingrese el importe de su factura: \n");
        scanf("%d", &imp);

        if (imp > 400 && imp <= 700) {
            cont++;
        }

        suma += imp;

        printf("Ingrese el numero de factura: \n");
        scanf("%d", &numfac);
    }

    numfac--;

    printf("El total de importes mayores a 400 y menos o iguales a 700 es de: %d\n", cont);

    return 0;
}