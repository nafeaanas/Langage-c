#include <stdio.h>


int main(){
    char nome[30], prenom [30], Sexe [10], numeroT [30];
    int  Age;
     

   
    printf("Donner le nome: ");
    scanf("%s",&nome);
    printf("Donner le prenom: ");
    scanf("%s",&prenom );
    printf("Donner le Sexe: ");
    scanf("%s",&Sexe);
    printf("Donner le Age: ");
    scanf("%d",&Age);
     printf("Donner le numero de telephone: ");
    scanf("%s",&numeroT);

    printf("le nome et: %s \n" ,nome);
    printf("le prenom et: %s \n " ,prenom);
    printf("le Sexe et: %s \n" ,Sexe);
    printf("le Age et:  %d \n" ,Age);
    printf("le le numero de telephone et: %s \n" ,numeroT);


    
}