#define LIMIT 100 
#include <stdio.h>
int main(){
  
  char userInput;
  printf(">");
  //While the userInput is not equal to the end of the line we print the chars one by one
  while((userInput = getchar()) != '\n'){
    putchar(userInput);
  }
  printf("\n");
  
}
