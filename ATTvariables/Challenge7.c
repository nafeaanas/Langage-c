#include <stdio.h>


int main(){
int a,b;
float Somme , subtract , produit , division , modulo;
printf("Donner la valeur de  a:  ");
scanf ("%d",&a);
printf("Donner la valeur de  b:  ");
scanf ("%d",&b);

Somme = a + b ;
subtract = a - b ;
produit = a * b ;
division = a / b;
modulo = a % b ;
printf("a + b = %f  ", Somme);
printf("a - b = %f  ", subtract);
printf("a * b = %f  ", produit);
printf("a / b = %f  ", division);
printf("a %% b = %f  ", modulo);

}