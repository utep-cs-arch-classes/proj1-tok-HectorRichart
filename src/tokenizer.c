#include "tokenizer.h"

int space_char(char c){
  if(c == ' ' || c == '\t' || c == '\n'){
    return 1;
  }
  return 0;
}

int non_space_char(char c){
  if(c != ' ' && c != '\t' && c != '\n'){
    return 1;
  }
  return 0;
  
}

char *word_start(char *str){
  char *copy = str;
  while(space_char(*copy)){
    copy++;
  }
  return copy;
  
}

char *word_end(char *str){
  char *copy = str;
  while(non_space_char(*copy)){
    copy++;
  }
  return copy;
}

int count_words(char *str){
  int counter = 0;
  while(*str != '\0'){
    word_start(str);
    word_end(str);
    if(*str == '\0'){
      break;

      }
    }

  }

