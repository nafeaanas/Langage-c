#include<stdio.h>


int main(){
    int n;
    printf("donner un nombre:  ");
    scanf("%d",&n);
    if (n>0){
        printf("le nombre est positif");
    }else if(n<0){
        printf(" le nombre est négatif");
    }else
    printf("le nombre est nul");
    return 0;

}