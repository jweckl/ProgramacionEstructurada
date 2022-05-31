#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int lado1,lado2,lado3;
    system("cls");
    printf("\nIngrese el valor del lado 1 del triangulo: ");
    scanf("%d",&lado1);
    printf("\nIngrese el valor del lado 2 del triangulo: ");
    scanf("%d",&lado2);
    printf("\nIngrese el valor del lado 3 del triangulo: ");
    scanf("%d",&lado3);
    if(lado1==lado2 && lado1==lado3)
    {
        printf("El triangulo es equilatero\n");
    }
    else
    {
        if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
        {
            printf("El triangulo es escaleno\n");
        }
        else
        {	printf("El triangulo es isosceles\n");
        }
    }
    system("pause");
    return 0;
}
