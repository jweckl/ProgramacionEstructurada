#include <stdio.h>

// Ingresar los datos de facturación de una empresa. Se conoce Número de factura, Número de artículo, Cantidad vendida y Precio unitario
// Los datos finalizan con numero de factura = 0,
// cada factura sólo tiene un número de artículo, y existen sólo tres artículos.

int main() {

    int numfac;

    printf("Ingrese el numero de factura:");
    scanf("%d", &numfac);

    while (numfac == 1 || numfac == 2 || numfac == 3) {

        if (numfac == 1){
            printf("\nEl numero de factura ingresado es 1.\n");
            printf("El numero de articulo corresponde al 12345.\n");
            printf("La cantidad vendida es de 120 articulos.\n");
            printf("El precio unitario es de $30.\n\n");
        }

        if (numfac == 2){
            printf("\nEl numero de factura ingresado es 2.\n");
            printf("El numero de articulo corresponde al 15432.\n");
            printf("La cantidad vendida es de 54 articulos.\n");
            printf("El precio unitario es de $60.\n\n");
        }

        if (numfac == 3){
            printf("\nEl numero de factura ingresado es 3.\n");
            printf("El numero de articulo corresponde al 18553.\n");
            printf("La cantidad vendida es de 900 articulos.\n");
            printf("El precio unitario es de $10.\n\n");
        }

        printf("Ingrese el numero de factura: ");
        scanf("%d", &numfac);
    }

    printf("Sistema abandonado.");

    return 0;
}
