#include<stdio.h>


int main (){
  
float Celsius ;
float Fahrenheit ;
printf("Donner le valeur Fahrenheit:  ");
scanf("%f",&Fahrenheit);
Celsius = (Fahrenheit-32)/1.8;
printf("Fahrenheit = %.2f \n et Celsius = %.2f \n " ,Fahrenheit,Celsius);
if (Celsius<= 0){
    printf(" la temperature tres froid  ");
}else if(Celsius<= 20){
    printf(" la temperature  froid  ");
}else if( Celsius <=30){
    printf("la temperature  chaud ");
   } else{
       printf("la temperature tres  chaud");

    }



}