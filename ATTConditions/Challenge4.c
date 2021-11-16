#include<stdio.h>


int main (){
    int a,b,s,t;
    printf("donner premiere valeurs:  \n");
    scanf("%d",&a);
    printf("donner  deuxieme valeurs:  \n");
    scanf("%d",&b);

    s= a+b;
    t=s*3;
    if (a==b){
       printf("la somme de deux valeur est %d et le triple de %d est %d",s,s,t);
    }else
        printf("la somme de deux valeur est %d et les deux valeurs sont  non identiques",s);
    }


    
