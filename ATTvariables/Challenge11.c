#include <stdio.h>

int main (){
float circonférenceR,longueur,largeur;

printf("entree le rayon de longueur :  ");
scanf("%f",& longueur);
printf("entree le rayon de largeur :  ");
scanf("%f",& largeur);
circonférenceR = 2*(longueur + largeur);
printf("la circonference d'un rectangle = %f ",circonférenceR);


}