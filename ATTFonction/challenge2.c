#include<stdio.h>
void convert (int a,int b)
{
int c=a;
a=b;
b=c;
printf("la valeure de a= %d et lavaleur de b= %d",a,b);
}
int main(){
    int a,b;
    printf("donner le nombre a : \n");
    scanf("%d",&a);
    printf("donner le nombre b : \n");
    scanf("%d",&b);
    convert(a,b);
return 0;
}