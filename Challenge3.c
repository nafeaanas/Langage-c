#include <stdio.h>


int main (){
float Metre , Mile, km;
printf("Donner la distance en Metre:  ");
scanf("%f",&Metre);
km = Metre / 1000;
printf("Le resultat de km c'est : %f \n", km);
Mile = km * 1.609;
printf("la distance Metre = %.2f \n et la distance Mile = %f",Metre,Mile);








}