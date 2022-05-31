#include <stdio.h>
#include <stdlib.h>

//6. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad

int getmaxedad(int edad1, int altura1, int edad2, int altura2);

int main(int argc, char *argv[]) {

    int edad1, altura1, edad2, altura2;
    system("cls");

    printf("Ingrese la edad de la primer persona\n");
    scanf("%d", &edad1);
    printf("Ingrese la altura de la primer persona en cm\n");
    scanf("%d", &altura1);

    printf("Ingrese la edad de la segunda persona\n");
    scanf("%d", &edad2);
    printf("Ingrese la altura de la segunda persona en cm\n");
    scanf("%d", &altura2);

    int getestatura = getmaxestatura(edad1, altura1, edad2, altura2);

    printf("%d cm es la altura de la persona de mayor edad.\n", getestatura);

    return 0;
}

int getmaxestatura(int edad1, int altura1, int edad2, int altura2) {
    return edad1 > edad2 ? altura1 : altura2;
}