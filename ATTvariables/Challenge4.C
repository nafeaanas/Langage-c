#include <stdio.h>


int main ()
{


float Metre , Mile , km;
printf("Donner la distance en Mile :  ");
scanf("%f",&Mile);
km = Mile / 1.609;
printf("Le resultat de km c'est : %f \n", km);
Metre = km * 1000;
printf("la distance Mile = %.2f \n et la distance  Metre = %.2f",Mile,Metre);


}