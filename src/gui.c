#include "tokenizer.h"
#include <stdio.h>
#include "history.h"
#include <stdlib.h>

#define LIMIT 100 

//main method
int main(){
    
  char word [LIMIT];
  char userInput;
  int wordIndex = 0;
  printf(">");
  while((userInput = getchar()) != '\n'){
    word[wordIndex] = userInput;
    wordIndex++;
  }
  word[wordIndex] = '\0';
 printf("\n");
  
 
  char *test1 = word;
 // printf("%d\n", count_words(word));
  char **test2 = tokenize(word);
 
 print_tokens(test2);
  
  }
 
