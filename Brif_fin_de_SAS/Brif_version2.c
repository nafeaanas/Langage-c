#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int i=0,j=0,NE;
struct info {
    char CIN [10];
    char nom [20],prenom [20];
    double mantant ;
};
struct info IF [100];

void menu(){
    int choix;
do
    {

        menu:
             system("cls");
        printf("\t\t\t:::::::::::::::::::::::::<< Menu Principale >>:::::::::::::::::::::::::\n\n\n");
        printf("\t\t\t 1- Introduire un compte bancaire \n");
        printf("\t\t\t 2- Introduire plusieurs comptes bancaires \n");
        printf("\t\t\t 3- Operations \n");
        printf("\t\t\t 4- Affichage \n");
        printf("\t\t\t 5- Fidelisation \n");
        printf("\t\t\t 6- Quitter L'\application\n\n");
        do
        {
            printf("\tVeuillez donner Votre choix : \t");
            scanf("%d",&choix);
             if(choix>6 || choix<1)
            printf("Votre Choix doit Etre Compris Entre 1 et 6 \n");

        }while(choix>6 || choix<1);
        
       

        switch (choix){
            case 1: { AjouCopmte();

            }break;
             case 2: { PleuCompte();

            }break;
             case 3: { Operations

            }break;
             case 4: {

            }break;
             case 5: {

            }break;
             case 6: {

            }break;
        }
         }while(choix!=6);
        
        
}

void AjouCopmte(){
     
          printf("==> Veuillez Entrer le CIN :  ");
          scanf("%s",IF[i].CIN);
          printf("==> Veuillez Entrer le Nom :  ");
          scanf("%s",IF[i].nom);
          printf("==> Veuillez Entrer le Prenom :  ");
          scanf("%s",IF[i].prenom);
          printf("==> Veuillez Entrer le Montant :  ");
          scanf("%lf",&IF[i].mantant);
     printf("\n");
    i++;
    j++;
     }
     void PleuCompte(){
        
          do
                {
                      printf("donner le nombre d'enregistrement: \t");
                      scanf("%d",&NE);
                      if(NE<1 || NE>100)
                        printf("le nombre d'enregistrement doit etre comprit entre 1 et 100\n");
                }while(NE<1 || NE>100);
                int x=j;
                
    for(i=x;i<NE+x;i++)
    {
          printf("Veuillez donner les informations de compte bancaire numero %d :\n",i+1);
          AjouCopmte();
          j++;
          
     }
     }
     void Operations (){
         int choix;
          do
                {
                     system("cls");
                   printf("\t\t\t:::::::::::::::::::::::::: Operations ::::::::::::::::::::::::::\n\n\n");
                   printf("\t\t\t 1- Retrait \n");
                   printf("\t\t\t 2- Depot\n");
                   printf("\t\t\t 3- retour a menu  \n");
                   printf("\t Veuillez choisir une operation: \t");
                   scanf("%d",&choix);
                     switch(choix)
                {
                case 1:
                    {
                        float s1;
                        char CIN_user[10];

                        printf("entre votre Cin :\t");
                        scanf("%s",CIN_user);
                        for(i=0;i<*p;i++)
                        {
                            if(strstr(CIN_user,IF[i].CIN))
                            {
                                printf("combien :\n");
                                scanf("%f",&s1);
                                if(s1>IF[i].mantant)
                                {
                                    printf("\n impossible votre sold inferieur a %.2f\n",s1);
                                    break;
                                }
                                IF[i].mantant-=s1;
                            }

                        }

                    }break;
               case 2:
                    {
                        float s2;


                         printf("entre votre Cin :\t");
                        scanf("%s",CIN_user);
                        for(i=0;i<*p;i++)
                        {
                            if(strstr(cin_user,C[i].cin))
                            {
                                printf("combien :\n");
                                scanf("%f",&s2);
                                C[i].montant+=s2;
                            }
                        }

                    }break;
               case 3:
                   {
                       goto menu;

                   }break;



                }
                }while(choix!=3);
     }

int main(){
   menu();
   return 0;
        }