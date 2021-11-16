#include<stdio.h>
#include<math.h>

int main (){
    int an,mois,jours,heures,minutes,secondes;
    char vl;
    printf("donner une annee: \n");
    scanf("%d",&an);
    jours = an * 365;
    mois = jours/30;
    heures = jours*24;
    minutes = heures *60;
    secondes = minutes *60;
    printf("tapper : pour mois :m et pour jours: j et pour heures:h et pour minutes:M et pour secondes: s\n");
    scanf("%s",&vl);
     switch (vl){
        case 'm' : printf("les mois de une annee %d est %d",an,mois);
        break;
         case 'j' : printf("les jours de une annee %d est %d",an,jours);
        break;
         case 'h' : printf("les heures de une annee %d est %d",an,heures);
        break;
         case 'M' : printf("les minutes de une annee %d est %d",an,minutes);
        break;
         case 's' : printf("les secondes de une annee %d est %d",an,secondes);
        break;
        default: printf("slvp tapper correcte");
        break;
    }
    
    
    }