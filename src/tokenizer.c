#include <stdlib.h>
#include "tokenizer.h"
#include <stdio.h>

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
  while(space_char(*copy) && *copy != '\0'){
    copy++;
  }
  return copy;
  
}

char *word_end(char *str){
  char *copy = str;
  while(non_space_char(*copy) && *copy != '\0'){
    copy++;
  }
  return copy;
}
/*
int count_words(char *str)
{
 int counter = 0;
 char *helper = str;
 while(*helper)
 {
	 helper = word_start(helper);
	 helper = word_end(helper);
	 
	 if(*helper == '\0')
	 {
		 break;  
	 }
	 counter++;
  }
 return counter;
}
*/

int count_words(char *str){
  int count = 0;
  char *pointer = str;
  while(*pointer){
    pointer = word_start(pointer);
    pointer = word_end(pointer);
    count++;

  }
  return count;

}

char *copy_str(char *inStr, short len){
  //we need an extra space for the terminator character
  char *newptr = malloc(sizeof(char) * (len+1));     
  int i = 0;
  while(i < len){
    newptr[i] = inStr[i];
    i++;
  }
  newptr[i] = '\0';
  return newptr;
}


char **tokenize(char* str){
  //calling count words method to get the number of spaces needed to tokenize
  int spacesNeeded = count_words(str);

  int i = 0;
  //allocating space for the number of words +1 because we need a space for line terminator
  char **tokens = malloc( ( sizeof(char**) ) * spacesNeeded+1);
  //word_end gets the end of the word we are looking at and start word gets the start of str
  char *startOfWord = word_start(str);
  char *endOfWord = word_end(startOfWord);
  //ensuring that we do not tokenize spaces, we put str at the start of the word
  str = word_start(str);
  while(*str != '\0'){ //pointer
    //Calling methods again because we want to repeat the process of finding start and end of
    //a word each time we move to a new word
    startOfWord = word_start(str);
    endOfWord = word_end(startOfWord);
    //getting a copy of each word, the substraction substracts memory and this gives the
    //length of the word we are looking at as a result
   char *copyWord = copy_str(str, endOfWord-startOfWord);
   //reassigning pointer tokens at i equals to pointer copy word
   tokens[i] = copyWord;
   i++;
   //moving str pointer to the next word if any, go to end of actual and then go to start of next
   str = word_end(str);
   str = word_start(str);
  }
  //adding the line terminator at the end of tokenizing
  tokens[i] = '\0';
  return tokens;
}


void print_tokens(char **tokens){
 int i = 0;
  while(*tokens[i] != '\0'){
    printf("%s\n",tokens[i]);
    i++;
  }
}


void free_tokens(char **tokens){
  int i =0;
  while(*tokens[i] != '\0'){
    if(*tokens[i] == '\0'){
      free(tokens[i]);
    break;
    }
    free(tokens[i]);
    i++;
  }
}



