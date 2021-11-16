#include<stdio.h>


int main (){
    int n;
    printf("Donner un nombre: ");
    scanf("%d",&n);
    if ( n %2==0 ){
        printf("Le nombre %i est un paire",n);
    }else
    printf("Le nombre %i est un impaire",n);
    
}
  