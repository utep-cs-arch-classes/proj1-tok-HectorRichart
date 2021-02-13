#define LIMIT 100 
#include <stdio.h>
int main(){
  
  char c;
  printf(">");
  //While the char is not equal to the end of the line we print the char
  while((c = getchar()) != '\n'){
    putchar(c);
  }
  printf("\n");
  
}
