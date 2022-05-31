#include <stdio.h>
#include <stdlib.h>

// Calcular el monto a pagar en una cabina de interet si el costo por hora es de $50 si es durante la semana y 30%
// si es durante un fin de semana. Para esto el usuario ingresa 1 para modalidad semanal y 2 para la findes de semana.
// Luego ,ingresar la cantidad de horas. El sistema debe indicar que la opcion es incorrecta en caso de ingresar un valor diferente.
// Por cada dos horas se le bonifica una hora adicional. Se desea saber :
//a- Cantidad de horas contratadas
//b- Monto total de la operacion

int main(int argc, char *argv[]) {

    int modalidad, costo, horas, resultado, precio_especial=0, hora_comu;

    printf("Ingrese segun corresponda con: 1 para dia de semana, 2 para fin de semana:\n");
    scanf("%d", &modalidad);

    printf("Ingrese la cantidad de horas:\n");
    scanf("%d", &horas);

    costo = (horas*50);

    for(int i=1; i<=horas; i++){
        if (i %3==0){
        costo -= 50;
        }
    }

    if(modalidad == 1){
        printf("Usted tiene un consumo de %d horas en la cabina de internet\n", horas);
        printf("Usted tiene un costo a pagar de %d pesos\n", costo);
        return 0;
    }
    if (modalidad == 2){

        costo = (costo * 0.7);

        printf("Usted tiene un consumo de %d horas en la cabina de internet\n", horas);
        printf("Usted tiene un costo a pagar de %d pesos\n", costo);
        return 0;
    }
        else{
        printf("Usted ingreso una modalidad de semana incorrecta. Vuelva a ingresar.\n");
        }

	return 0;
}
