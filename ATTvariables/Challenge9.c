#include <stdio.h>
#include <math.h>

float Distance (int x1,int y1,int x2,int y2){
return(sqrt (pow ((x2 - x1),2) + pow ((y2-y1),2)));
}
int main (){
    int Xm,Ym,Xn,Yn;
    printf("donner les coordonnées de deux point \n ");
    printf("donner la valeure de Xm:  ");
    scanf("%d",&Xm);
    printf("donner la valeure de Ym:  ");
    scanf("%d",&Ym);
    printf("donner la valeure de Xn:  ");
    scanf("%d",&Xn);
    printf("donner la valeure de Yn:  ");
    scanf("%d",&Yn);
    printf("la distance entre deux points = %f",  Distance(Xm,Ym,Xn,Yn));




}