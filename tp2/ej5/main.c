#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 5. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de estas sumas es mayor

int main(int argc, char *argv[]) {

    int v1, v2, v3, v4, suma1, suma2;
    system("cls");
    printf("\nIngrese el primer valor entero: ");
    scanf("%d", &v1);
    printf("\nIngrese el segundo valor entero: ");
    scanf("%d", &v2);
    printf("\nIngrese el tercer valor entero: ");
    scanf("%d", &v3);
    printf("\nIngrese el cuarto valor entero: ");
    scanf("%d", &v4);
    {
        suma1 = (v1 + v2);
        suma2 = (v3 + v4);
    }
    {
        if (suma1 > suma2)
            printf("\nLa suma de los valores 1 y 2 es mayor. El resultado es %d.", suma1);

        else
            printf("\nLa suma de los valores 3 y 4 es mayor. El resultado es %d.", suma2);
    }

    system("pause");
    return 0;
}
