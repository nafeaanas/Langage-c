#include <stdio.h>


int main(){


float Celsius ;
float Fahrenheit ;
printf("Donner le valeur Fahrenheit:  ");
scanf("%f",&Fahrenheit);
Celsius = 5/9 * (Fahrenheit-32);
printf("Fahrenheit = %.2f \n et Celsius = %.2f " ,Fahrenheit,Celsius);
return 0;

}