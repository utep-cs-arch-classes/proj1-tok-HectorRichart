#include "tokenizer.h"
#include <stdio.h>
#include "history.h"

#define LIMIT 100 

int main(){
  
  char word [LIMIT];
  char userInput;
  int wordIndex = 0;
  printf(">");
  while((userInput = getchar()) != '\n'){
    putchar(userInput);
    word[wordIndex] = userInput;
    wordIndex++;
  }
 
  word[wordIndex] = '\0';
 printf("\n");
  
 // char testing [LIMIT] = {"Hello Test This"};
 // char *test1 = testing;
printf("%d\n", count_words(word));
 //char **test2 = tokenize(testing);
 
//printf(print_tokens(test2));
 
}

