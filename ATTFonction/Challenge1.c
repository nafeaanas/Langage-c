#include<stdio.h>
int add (int x,int y)
{
    int s=x+y;
    return s;
}
int main(){
    int a,b;
    printf("donner le premier nombre:  \n");
    scanf("%d",&a);
    printf("donner le deuxieme nombre:  \n");
    scanf("%d",&b);
    printf("la somme de %d +%d =%d",a,b,add(a,b));
    return 0;
}