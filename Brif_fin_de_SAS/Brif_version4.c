#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Retrait();
void Depot();
void Operations ();
void PleuCompte();
void AjouCopmte();
void Affichage();
void Affichage_Ascendant();
void Fidelisation();
void Chercher();
void Affichage_Descendant();

static int i=0,j=0,NE;
struct info {
    char CIN[10];
    char nom[20],prenom[20];
    float mantant ;
};
struct info IF[100];

void menu(){
    int choix;
do
    {

        menu:
            //system("cls");
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
             case 3: {  Operations ();

            }break;
             case 4: {  Affichage();

            }break;
             case 5:  { system ("cls");
                  Fidelisation();      
              
              }break;
             case 6: {printf("MERCI POUR VOTRE VISITE");
             exit(0);

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
          scanf("%f",&IF[i].mantant);
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
         // AjouCopmte();
         printf("==> Veuillez Entrer le CIN :  ");
          scanf("%s",IF[i].CIN);
          printf("==> Veuillez Entrer le Nom :  ");
          scanf("%s",IF[i].nom);
          printf("==> Veuillez Entrer le Prenom :  ");
          scanf("%s",IF[i].prenom);
          printf("==> Veuillez Entrer le Montant :  ");
          scanf("%f",&IF[i].mantant);
     printf("\n");
          j++;
          
     }
     }
    void Operations (){
        int choix;
         do
                {
                     //system("cls");
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
                        Retrait();
                    }break;
               case 2:
                    {
                        Depot();
                    }break;
               case 3:
                   {
                        menu();

                   }break;
                   }
                }while(choix!=3);
        }
 void Depot(){
     float s2;
 char cin_user[20];
printf("entre votre Cin :\t");
scanf("%s",cin_user);
for(i=0;i<NE+j;i++)
{
  if(strcmp(cin_user,IF[i].CIN)==0)
    {
        printf("combien :\n");
        scanf("%f",&s2);
        IF[i].mantant+=s2;
        printf("le mantant entrer est %.2f et le mantantant totale est %.2f \n",s2,IF[i].mantant);
    }
}
}       
  void Retrait()
{
float s1;
char cin_user[20];
printf("entre votre Cin :\t");
scanf("%s",cin_user);
for(i=0;i<NE+j;i++)
    {
 if(strcmp(cin_user,IF[i].CIN)==0)
    {
                    printf("combien :\n");
                    scanf("%f",&s1);
                    if(s1>IF[i].mantant)
            {
                system("cls");
                printf("\n impossible votre sold inferieur a %.2f\n",s1);
                break;
            }
      IF[i].mantant-=s1;
      printf("le mantant Sortie est %.2f et le mantantant reste est %.2f \n",s1,IF[i].mantant);
    }
    }
}
void Affichage(){
    int choix ;
    do{

                   printf("\n\t\t\t:::::::::::::::::::::::::: Affichage ::::::::::::::::::::::::::\n");
                   printf("\t\t\t 1- Par Ordre Ascendant \n");
                   printf("\t\t\t 2- Par Ordre Descendant\n");
                   printf("\t\t\t 3- Par Ordre Ascendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)\n");
                   printf("\t\t\t 4- Par Ordre Descendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)\n");
                   printf("\t\t\t 5- Recherche Par Cin\n");
                   printf("\t\t\t 6- retour a menu\n");
                   printf("\t Veuillez choisir une operation: \t");
                   scanf("%d",&choix);
                   switch(choix)
                   {
                   case 1:
                    {
                        Affichage_Ascendant();
                    }break;
                  case 2:
                    {
                        Affichage_Descendant();
                    }break;
                  case 3:
                    {
                        int a=j;
                          //printf("%d",a);

                        int x=0;
                        float x_montant;
                        printf("\n Veuillez entre un Montant: \t");
                        scanf("%f",&x_montant);
                       struct info new_IF[100];
                        for(i=0;i<a;i++)
                        {
                            if(IF[i].mantant>x_montant)
                            {
                                new_IF[x]=IF[i];
                                x++;

                            }
                        }
                       
                              struct info tmp;
                       int  ech=0;
                        do
                        {
                             for(i=0;i<x-1;i++)
                        {
                            if( new_IF[x].mantant>new_IF[i+1].mantant)
                            {
                                tmp=new_IF[i+1];
                                new_IF[i+1]=new_IF[i];
                                new_IF[i]= tmp;

                            }
                             ech++;

                             }

                        }while(ech>0);

                               printf("\n\t\t\t:::::::::::::::::::::::::: L'ffichage Par Ordre Ascendant par apport le Mantant  %.2f d'une manier Ascendant   :::::::::::::::::::::::::\n",x_montant);

                        for(i=0;i<x;i++)
                        {
                          printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",new_IF[i].CIN,new_IF[i].nom,new_IF[i].prenom,new_IF[i].mantant);

                        }

                    }break;
                  case 4:
                    {
                        int a=j;
                          printf("%d",a);

                        int x=0;
                        float x_montant;
                        printf("\n Veuillez entre un Montant: \t");
                        scanf("%f",&x_montant);
                        struct info new_IF[100];
                        for(i=0;i<a;i++)
                        {
                            if(IF[i].mantant>x_montant)
                            {
                                new_IF[x]=IF[i];
                                x++;

                            }
                        }
                               struct info tmp;
                       int ech=0;
                        do
                        {
                             for(i=0;i<x-1;i++)
                        {
                            if(new_IF[i].mantant<new_IF[i+1].mantant)
                            {
                                tmp=new_IF[i+1];
                                new_IF[i+1]=new_IF[i];
                                new_IF[i]= tmp;

                            }
                             ech++;



                        }

                        }while(ech>0);

                               printf("\n\t\t\t:::::::::::::::::::::::::: L'ffichage Par Ordre Ascendant par apport le Mantant  %.2f d'une manier Descendant  ::::::::::::::::::::::::::\n",x_montant);

                        for(i=0;i<x;i++)
                        {
                          printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",new_IF[i].CIN,new_IF[i].nom,new_IF[i].prenom,new_IF[i].mantant);

                        }





                    }break;
                  case 5:
                    {
                        Chercher();
                    }break;
                  case 6:
                    { 
                        menu();
                    }break;

                    }

                    }while(choix!=6);




}
void Fidelisation()
{
int a=j;
 struct info tmp;
int ech=0;
 do
  {
    for(i=0;i<a-1;i++)
    {
     if(IF[i].mantant<IF[i+1].mantant)
      {
        tmp=IF[i+1];
        IF[i+1]=IF[i];
        IF[i]= tmp;

      }
    ech++;
}
}while(ech>0);
   
  printf("\n\t\t\t:::::::::::::::::::::::::: L'ffichage les 3 premier avent la fidelisation  ::::::::::::::::::::::::::\n");
for(i=0;i<3;i++)
    {
     printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",IF[i].CIN,IF[i].nom,IF[i].prenom,IF[i].mantant);
     IF[i].mantant+=((IF[i].mantant*1.3)/100);
    }

}
void Chercher()
{
 int a=j;
 char x_cin[20];
 printf("Veuillez Entrer votre Cin: \t");
 scanf("%s",x_cin);
 for(i=0;i<a;i++)
 {
    if(strcmp(x_cin,IF[i].CIN)==0)
        {
         printf("existe :\n Cin : %s\t Nom :  %s\t Prenom : %s\t Montant: %.2f DH\n",IF[i].CIN,IF[i].nom,IF[i].prenom,IF[i].mantant);
 }else
 
printf("\n CIN n'existe pas \n");
break;
}
}
void Affichage_Ascendant(){
    int a=j;
struct info tmp;
int ech=0;
 do
    {
for(i=0;i<a-1;i++)
{
    if(IF[i].mantant>IF[i+1].mantant)
            {
        tmp=IF[i+1];
        IF[i+1]=IF[i];
        IF[i]= tmp;
            }
        ech++;
    }
    }while(ech>0);
system("cls");
printf("\n\t\t\t:::::::::::::::::::::::::: L'ffichage Par Ordre Ascendant ::::::::::::::::::::::::::\n");
 for(i=0;i<a;i++)
  {
    printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",IF[i].CIN,IF[i].nom,IF[i].prenom,IF[i].mantant);
  }
}
void Affichage_Descendant(){
    int a=j;
struct info tmp;
int ech=0;
do
{
for(i=0;i<a-1;i++)
{
if(IF[i].mantant<IF[i+1].mantant)
{
tmp=IF[i+1];
IF[i+1]=IF[i];
IF[i]= tmp;
}
ech++;
}
}while(ech>0);
system("cls");
printf("\n\t\t\t:::::::::::::::::::::::::: L'ffichage Par Ordre Descendant  ::::::::::::::::::::::::::\n");
for(i=0;i<a;i++)
{
    printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",IF[i].CIN,IF[i].nom,IF[i].prenom,IF[i].mantant);
}
}

int main(){
   menu();
   return 0;
        }