#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void menu(){

    printf("\n\n");
    printf("------ merci pour visite un logitial ------\n\n\n");
        printf("------ Le menu principal ------\n\n");
            printf("==> Tapper 1 pour introduire un compte bancaire\n");
            printf("==> Tapper 2 pour introduire plusieurs comptes bancaires\n\n");
        printf("------ Les Operations ------\n\n");
            printf("==> Tapper 3 pour Retrait\n");
            printf("==> Tapper 4 pour dipot\n\n");
        printf("------ Affichage ------\n\n");
            printf("==> Tapper 5 pour Affiche par order ascendent \n");
            printf("==> Tapper 6 pour Affiche par order descendent \n");
            printf("==> Tapper 7 pour  Recherche par CIN \n\n");
        printf("------ Quitter ------\n\n");
            printf("==> Tapper 8 pour  Quitter lapplication \n\n");

}
void un_compteB(char CIN[10],char Nom[20],char Pren[20],double Mont){
printf("donner le Nom: /n");
scanf("%s",Nom);
printf("donner le Prenom: /n");
scanf("%s",Pren);
printf("donner le CIN: /n");
scanf("%s",CIN);
printf("donner le Mont: /n");
scanf("%d",&Mont);
}

int main()

{
    char CIN[10],Nom[20],Pren[20];
    double Mont;
    int Nbr;
do{
    menu();
scanf("%d",&Nbr);

switch (Nbr){
    case '1': un_compteB( CIN[10], Nom[20], Pren[20], Mont);
    break;
    /*case '2':
    break;
    case '3':
    break;
    case '4':
    break;
    case '5':
    break;
    case '6':
    break;
    case '7':
    break;
    case '8':
    break;*/
    default: printf("sfg");
    break;
}
}while(Nbr!=8);


}





