#include <stdio.h>

//Ingresarfacturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan los $1000.
//Imprimir los resultados
//
// Sobre el ejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive. imprimir el resultado

int main() {

    int numfac, imp, suma, masmilfac, masmilimp;

    printf("Ingrese el numero de factura: \n");
    scanf("%d", &numfac);

    while (numfac != 0) {

        printf("Ingrese el importe de su factura: \n");
        scanf("%d", &imp);

        if (imp > 1000) {
            printf("El numero de la factura es %d y su importe es de %d\n", numfac, imp);
        }

        suma += imp;

        printf("Ingrese el numero de factura: \n");
        scanf("%d", &numfac);
    }

    numfac--;

    printf("La suma de todos los importes es de: %d\n", suma);

    return 0;
}
