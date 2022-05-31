#include <stdio.h>
#include <stdlib.h>

int main(){
    float A,B,res;
    int op,band=0;

    printf("\t\t CALCULADORA \n\n");
    printf("Ingrese el numero A: ");
    scanf("%f",&A);
    printf("Ingrese el numero B: ");
    scanf("%f",&B);
    printf("\t\t MENU DE OPERACIONES \n\n");
    printf("\t 1 - Suma A+B \n");
    printf("\t 2 - Resta A-B \n");
    printf("\t 3 - Multiplicacion A*B \n");
    printf("\t 4 - Division A/B \n");
    printf("\t Seleccione su opccion (1-4): \n");
    scanf("%i",&op);

    switch(op){
        case 1: res=A+B;break;
        case 2: res=A-B;break;
        case 3: res=A*B;break;
        case 4: res=A/B;break;
        default: band=1;
    }

    if (band==0){
        printf("\t El resultado de la operacion es %f\n", res);
    }
    else{
        printf("\t Seleccionaste una opcion incorrecta. Vuelva a ingresar.\n");
    }
    return 0;
}
