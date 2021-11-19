#include<stdio.h>
#include<stdlib.h>
void main()
{

int n,t[10],max=0,s=0,i;
 printf("ecrire un nombre: \n");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
printf("enter %d  ",i+1);
scanf("%d",&t[i]);
if(t[i]<100 && t[i]%10==0){
if(t[i]>max){
max=t[i];
}	
s=s+t[i];
	
}

}
 printf("la somme est %d \n",s);
 printf("le max est %d \n",max);

 

}