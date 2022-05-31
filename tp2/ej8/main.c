#include <stdio.h>

// Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida, considerar los años bisiestos

int main() {
    int dia, mes, anio;

    printf("Ingrese el dia en formato numero: \n");
    scanf("%d", &dia);
    printf("Ingrese el mes en formato numero: \n");
    scanf("%d", &mes);
    printf("Ingrese el anio en formato numero: \n");
    scanf("%d", &anio);

    if (mes == 2 && dia == 29){
        if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
            printf("Fecha valida y anio biciesto\n");
        else printf("La fecha ingresada es invalida\n");}

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if (dia > 0 && dia < 32)
            printf("La fecha ingresada es valida\n");
        else printf("La fecha ingresada es invalida\n");}

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia > 0 && dia < 31)
            printf("La fecha ingresada es valida\n");
        else printf("La fecha ingresada es invalida\n");}

    return 0;
}
