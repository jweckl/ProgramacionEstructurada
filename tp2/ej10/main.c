#include <stdio.h>

// 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con más de 5 años de antigüedad

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

    if (categoria==1 && antiguedad>5)
        printf("Los sueldos de los empleados con mas de 5 anios de antiguedad son: %f", sueldot);

    if (categoria!=1 && antiguedad>5)
        printf("Los sueldos de los empleados con mas de 5 anios de antiguedad son: %f", sueldo);

    return 0;
}

