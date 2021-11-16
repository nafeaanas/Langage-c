#include<stdio.h>


int main (){
    char n;
    printf("Donner un caractère : \n");
    scanf("%c",&n);
    switch (n){
        case 'a' : printf("n est une voyelle A");
        break;
         case 'b' : printf("n est une voyelle I");
        break;
         case 'o' : printf("n est une voyelle O");
        break;
         case 'u' : printf("n est une voyelle U");
        break;
         case 'y' : printf("n est une voyelle Y");
        break;
        default: printf("un caractère est une consonne");
        break;
    }
    
}
  