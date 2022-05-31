#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int v1;
    system("cls");
    printf("Ingrese un valor: ");
    scanf("%d", &v1);
    if (v1 == 0)
        printf("El valor es cero\n");
    else if (v1 > 0)
        printf("El valor es mayor a cero\n");
    else if (v1 < 0)
        printf("El valor es menor a cero\n");


    system("pause");
    return 0;
}