#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados

int main(int argc, char *argv[]) {
	
	int sueldo, suma, cant;
	float prom;
	
	printf("Ingrese el sueldo:\n");
	scanf("%d", &sueldo);
	
	while(sueldo>0)
	{
		cant++;
		suma+=sueldo;
		
		printf("Ingrese el sueldo:\n");
		scanf("%d", &sueldo);
	}
	
	cant--;
prom = (float) (suma/cant);
	
printf("La suma total de los sueldos es de $%d", suma);
printf("El promedio de los sueldos es de $%.2f", prom);
	
	
	return 0;
}
