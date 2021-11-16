#include <stdio.h>


int main(){


float Celsius ;
float Fahrenheit ;
printf("Donner le valeur Fahrenheit:  ");
scanf("%f",&Fahrenheit);
Celsius = (Fahrenheit-32)/1.8;
printf("Fahrenheit = %.2f \n et Celsius = %.2f " ,Fahrenheit,Celsius);


}