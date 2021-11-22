#include<stdio.h>
#include<stdbool.h>
int a,b;
int dev(){
 int d=a/b;
return d;	
}
bool pr( ){
int i;	
for (i=2;i<dev();i++){
if (dev()%i==0)	{
return false;	
}
}	
return true;	
}
 void main(){
printf("ecrire la valeur de A :\n");
scanf("%d",&a);
printf("ecrire la valeur de B:\n");
scanf("%d",&b);
printf("la devision est : %d \n",dev());
 	
if (pr()==0){
printf("%d : n est pas premier ",dev());
 }
 else printf("%d : premier ",dev());
 
	
}
