#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,nbi=0;
 printf("entrer un nombre :\n");
 scanf("%d",&n);
 while(n!=0){
nbi=nbi*10;
 nbi=nbi+n%10;
 n=n/10;
 }



printf("le nombre inverser est %d :",nbi);

return 0;
}

