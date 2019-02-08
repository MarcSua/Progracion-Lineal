/*
Convierte un caracter de minuscula a mayuscula
*/
#include<stdio.h>
int main ( ) {
char min, may;
printf("Escribe una letra minuscula: ");
scanf("%c", &min);
may=min-'a'+'A';
printf("La letra mayuscula es %c \n", may);
return 0;
}
