#include "tokenizer.h"
#include <stdio.h>

#define LIMIT 100 

int main(){
  char userInput;
  printf(">");
  //char *test = "   Hi  Hello  Hector\n  Dont  ";
  //test = word_start(test);
  //test = word_end(test);
  //printf(test);
  //int countt = count_words(test);
  //printf("%d\n", countt);
  //While the userInput is not equal to the end of the line we print the chars one by one
  while((userInput = getchar()) != '\n'){
    putchar(userInput);
  }

  printf("\n");
}
