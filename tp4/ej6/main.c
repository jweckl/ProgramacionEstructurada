#include <stdio.h>

// En una carrera de autos se ingresan el número de auto y su tiempo.
// Indicar e imprimir cuál ganó y cúal fue el último

int main() {

    int num, win, loss, cont;
    float time, bestt, worstt;

    printf("Ingrese el numero de auto (1-999): ");
    scanf("%d", &num);

    while (num > 0 && num < 1000) {

        printf("\nIngrese el tiempo de llegada en segundos: ");
        scanf("%f", &time);
        cont++;

        if (cont == 1) {
            bestt = time;
            worstt = time;
            win = num;
            loss = num;
        }
        else {
            if (time < bestt) {
                win = num;
                bestt = time;
            }
            if (time > worstt) {
                loss = num;
                worstt = timep;
            }
            if (time < bestt) {
                win = num;
                bestt = time;
        }
        }

        printf("\nIngrese el numero de auto (1-1000): ");
        scanf("%d", &num);
    }

    cont--;
    num--;

    printf("\nEl auto ganador de la carrera es el numero %d", win);
    printf("\nEl auto perdedor de la carrera es el numero %d", loss);

    return 0;
}
