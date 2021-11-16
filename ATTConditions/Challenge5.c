#include<stdio.h>
#include<math.h>

int main (){
    int a,b,c,d;
    float x1,x2,x;
    printf("donner la valeure a:  \n");
    scanf("%d",&a);
    printf("donner la valeure b:  \n");
    scanf("%d",&b);
    printf("donner la valeure c:  \n");
    scanf("%d",&c);
d=pow((b),2)-4*a*c;

x=(-b/2)*a;
x1= (-b-sqrt(d))/2;
x2= (-b+sqrt(d))/2;
   
    if (d<0){
        
       printf("quation d = 0");
    }else if (d=0){
        printf("equation d = %f ",x);
    }else
        printf("equation d = x1:%d et x2:%d",x1,x2);
    }
