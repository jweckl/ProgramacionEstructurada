#include <stdio.h>
#include <stdlib.h>

//7. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo

int main() {
    float valh, tiet, sueldoa, sueldob, sueldoc;

    printf("\t\t BIENVENIDO A LA CALCULADORA DE SUELDO \n\n");
    printf("Ingrese la cantidad de horas trabajadas por el empleado: \n");
    scanf("%f", &tiet);
    printf("Ingrese el valor de la hora trabajada por el empleado: \n");
    scanf("%f", &valh);

    if (tiet <= 50) {
        sueldoa = (float) (tiet * valh);
        printf("El sueldo del empleado es de %f", sueldoa);
    }

    if (tiet > 50 && tiet < 150) {
        sueldob = (float) (tiet * valh) + 100;
        printf("El sueldo del empleado es de %f", sueldob);

    }

    if (tiet > 150) {
    sueldoc = (float) (tiet * valh) + 150;
    printf("El sueldo del empleado es de %f", sueldoc);
    }

    return 0;
}
