#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	/*cargar las alturas de las personas hasta que altura = 0.
	Contar cuantas persanas están debajo de la media.
	Mostrar el porcentaje que representan las personas debajo de 1.50 metros
	Mostrar la altura máxima y la altura mínima y a quien pertenece.
	
	Variables de entrada
	
	media
	altmaxima
	altminima
	nombremax
	nombremin
	nombre
	cant
	
	*/

int main(int argc, char *argv[])
{
	
	float media ,altmaxima,	altminima, altura;
	char nombremax[15],	nombremin[15],	nombre[15];
	int cant=0,cant15=0;
	float totalaltura=0;
	int bandera=1;
	
	printf("\nIngrese una Altura Valida (>0) ");
	scanf("%f", &altura);

	while(altura!=0)
	{
		printf("\nIngrese el nombre de la persona ");
	//	scanf("%f", &nombre);		
		fflush(stdin);
		gets(nombre);
		if(bandera==1)
		{
			altmaxima=altura;
			altminima=altura;
//			nombremax=nombre;
			strcpy(nombremax,nombre);
			strcpy(nombremin,nombre);
			bandera=0;
		}	
		else
		{
			if(altmaxima<altura)
			{
				altmaxima=altura;
				strcpy(nombremax,nombre);
			}
			if(altminima>altura)
			{
				altminima=altura;
				strcpy(nombremin,nombre);
			}
		}
		cant++;
		totalaltura+=altura;				
		if(altura<1.5)
		{
			cant15++;
		}
		
		
		printf("\nIngrese una Altura Valida (>0) ");
		scanf("%f", &altura);
	}	
	printf("\nEl total de Persona ha sido de: %d ", cant);
	printf("\nLa sumatoria de todas las alturas es %.2f ", totalaltura);
	printf("\nLa La media es %.2f ",(float) totalaltura/cant);
	printf("\nLa cantidad de Persona con altura menor 1.5 son %d ",cant15);
	printf("\nLa altura minima es de %f con %s ",altminima,nombremin );
	printf("\nLa altura maxima es de %f con %s ",altmaxima,nombremax );
	
	
	
	return 0;
}
