#include<stdio.h>
int main(){
    int i,j,k,n,f;
printf("donner le nombre des  lignes");
scanf("%d",&n);
    for (i=0;i<=n-1;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i+1;k++){
            printf("*");
           // printf("*");
        }
        
        for (f=1;f<=i;f++){
            printf("*");
            
        }
        printf("\n");
    }
}