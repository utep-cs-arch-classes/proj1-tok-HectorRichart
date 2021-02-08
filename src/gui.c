#include <stdio.h>
int main(){
  //takes user input and display it to user

  char userInput[100];
  printf(">");
  fgets(userInput,100,stdin);

  printf(userInput);

  return 0;
  
}
