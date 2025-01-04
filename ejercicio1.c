/*Realizar un programa en c que cuente la cantidad de veces que se ingresan números pares 
y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se cuenta.*/

#include <stdio.h>
int main (int argc, char *argv[]) {
    int n;
    int pares = 0, impares = 0;
    printf("Contador de numeros pares e impares\n");
    printf("*Un numero negativo detiene el programa\n");
    do {
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    if (n > 0) {
        if (n % 2 == 0) {
            pares++;
        } 
        else {
            impares++;
            }
    }
    } while (n >= 0);
    printf("****Recuento final****\n");
    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);
    return 0;
}