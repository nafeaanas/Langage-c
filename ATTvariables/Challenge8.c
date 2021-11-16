#include <stdio.h>


int main(){
int a,b,c,d,somme;
float Moyenne ;
printf("Donner la valeur de  a:  ");
scanf ("%d",&a);
printf("Donner la valeur de  b:  ");
scanf ("%d",&b);
printf("Donner la valeur de  c:  ");
scanf ("%d",&c);
printf("Donner la valeur de  d:  ");
scanf ("%d",&d);
somme = a + b + c + d ;
Moyenne = somme / 4 ;

printf("somme = %d \n",somme );
printf("Moyenne = %f",Moyenne );


}