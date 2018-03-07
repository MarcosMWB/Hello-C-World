#include <stdio.h>

void helloworld(char var,char x){
  
    if(x == ' ')
        printf("Hello %c World!\n", var);
    else
        printf("Hello %c%c%c World!\n", var, x, x);
  
}

int main(){

  helloworld('C',' ');
  helloworld('C','P');
  
return 0;
  
}
