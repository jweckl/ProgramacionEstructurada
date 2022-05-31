#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int v1,v2;
system("cls");
printf("Ingrese el primer valor: ");
scanf("%d",&v1);
printf("Ingrese el segundo valor: ");
scanf("%d",&v2);
if(v1==v2)
	{
	printf("Los valores son iguales");
	}
	else
	printf("Los valores son distintos");

system("pause");
	return 0;
}
