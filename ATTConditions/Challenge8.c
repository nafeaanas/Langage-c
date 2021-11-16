#include<stdio.h>
int main(){
    char c;
    printf("donner un caractere: \n");
    scanf("%c",&c);
    if (c>=65 && c<=90)
    {
        printf("le caractère donné %c est un alphabet majuscule",c);
    }else
    printf("le caractère donné %c est un alphabet non majuscule",c);
    return 0;
}