#include "history.h"
#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"

//static int dataId = 100;
/*
typedef struct s_item{
  int id;
  char *str;
  struct s_item *next;
  Item;
}

  typedef struct s_List{
    struct s_item *root;
    List;

  }

*/

/*
List* init_history(){
  List* list = (List*)malloc(sizeof(List));
    list->root = NULL;
  return list;
}

void add_history(List *list, char *str){
  struct s_item *current = list->root;
  struct s_item *nextNode = malloc(sizeof(struct s_item));
  if(current == NULL){
    list->root = nextNode;
    nextNode->id=1;
    nextNode->str = str;
    nextNode->next = NULL;
  }
  else{
    while(current->next != NULL){
      current = current->next;
    }
    current->next = nextNode;
    nextNode->id = current->id+1;
    nextNode->str = str;
    nextNode->next = NULL;
 
  }
  
}

char *get_history(List *list, int id){

}

void print_history(List *list){
  struct s_item *current = list->root;

  if(current == NULL){
    printf("No items to print");
  }
  else{
    while(current->next != NULL){
      printf(current);
      current = current->next;
    }
  }
}

void free_history(List *list){
  struct s_item *current = list->root;
  struct s_item *nextNode;

  if(current == NULL){
    printf("No items to free");
  }
  else{
    while(current->next != NULL){
      free_tokens(current);
      current = current->next;
    }

  }
}
*/
