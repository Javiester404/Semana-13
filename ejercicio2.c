/*Realizar un programa en C que resuelva el siguiente problema: En un bosque se 
necesita saber el promedio de diámetro de cada tronco de ciprés y el promedio de su altura. 
El proceso termina cuando el usuario responde con una ‘N’, mientras tanto, debe responder con ‘S’.*/

#include <stdio.h>

int main() {
    float altura, diametro;
    float promAltura = 0, promDiametro = 0;
    int cont = 0;
    char respuesta = 'S';
    printf("Programa para calcular el promedio de altura y diametro de troncos de cipres.\n");
    while (respuesta == 'S'|| respuesta == 's') {
        printf("Ingrese la altura: ");
        scanf("%f", &altura);
        printf("Ingrese el diametro: ");
        scanf("%f", &diametro);
        promAltura = promAltura+altura;
        promDiametro = promDiametro+diametro;
        cont++;
        printf("Desea ingresar mas datos? (S/N): ");
        scanf(" %c", &respuesta);
    }
    printf("****RESULTADOS****\n");
    printf("Promedio de altura:   %.2f\n", promAltura / cont);
    printf("Promedio de diametro: %.2f\n", promDiametro / cont);
    return 0;
}
