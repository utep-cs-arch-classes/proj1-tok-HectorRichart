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
  while(space_char(*copy) && *str != '\0'){
    copy++;
  }
  return copy;
  
}

char *word_end(char *str){
  char *copy = str;
  while(non_space_char(*copy) && *str != '\0'){
    copy++;
  }
  return copy;
}

int count_words(char *str){
  int counter = 0;
  while(*str != '\0'){
   str = word_start(str);
    str = word_end(str);
    
    if(*str == '\0'){
      break;
     
      }
    counter++;
    }
  return counter;
  }

char *copy_str(char *inStr, short len);
