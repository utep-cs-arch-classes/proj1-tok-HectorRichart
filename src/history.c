#include "history.h"
#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"

static int dataId = 100;

List* init_history(){
  List* list = (List*)malloc(sizeof(List));
    list->root = NULL;
  return list;
}

void add_history(List *list, char *str){
  if(list == NULL){
    return;
  }
  if(str == NULL){
    return;
  }
  



  
}

char *get_history(List *list, int id){

}

void print_history(List *list){

}

void free_history(List *list){

}
