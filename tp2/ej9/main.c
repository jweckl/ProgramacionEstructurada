#include <stdio.h>

//9. Ingresar el sueldo, categoría y antigüedad de un empleado, calcular el sueldo final de cada uno de ellos, si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad.

int main() {
    float sueldo, sueldot, extra;
    int categoria, antiguedad;

    printf("\t\t BIENVENIDO A LA CALCULADORA DE SUELDO SEGUN ANTIGUEDAD\n\n");
    printf("Ingrese el sueldo base: \n");
    scanf("%f",&sueldo);
    printf("Ingrese la categoria de empleado en enteros: \n");
    scanf("%d",&categoria);
    printf("Ingrese la antiguedad del empleado: \n");
    scanf("%d",&antiguedad);

    extra = (float) (antiguedad*50);
    sueldot = (float) (sueldo + extra);

    if (categoria==1){
        printf("Su sueldo es de %f pesos.", sueldot);
    }

    else{
        printf("Su sueldo es de %f pesos.", sueldo);
    }

    return 0;
}
