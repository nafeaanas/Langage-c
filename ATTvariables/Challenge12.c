#include<stdio.h>

int main(){
    int N,a,b,c;
printf("Donner un entier de 3 chiffres \n ");
scanf("%d",&N);

a = (N % 10);
b = ((N-a)%100)/10;
c = ((N-a)-(b*10))/100;
printf ("le nombre inverse est %d%d%d\n ",a,b,c);
}