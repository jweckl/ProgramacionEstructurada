#include <stdio.h>

//11. Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80

int main() {
    float sueldo1, sueldo2, sueldo3, horas;
    int categoria;

    printf("Ingrese las horas trabajadas: \n");
    scanf("%f", &horas);
    printf("Ingrese la categoria de empleado (1-3): \n");
    scanf("%d", &categoria);

    if (categoria == 1) {
        sueldo1 = (float) (horas * 50);
        printf("El empleado cobra: %f", sueldo1);
    }

    if (categoria == 2) {
        sueldo2 = (float) (horas * 70);
        printf("El empleado cobra: %f", sueldo2);
    }

    if (categoria == 3) {
        sueldo3 = (float) (horas * 80);
        printf("El empleado cobra: %f", sueldo3);
    }

    return 0;
}
