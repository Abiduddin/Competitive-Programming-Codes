#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
   int value;
   struct NODE *next_address;
} NODE; // alias

void add_node(NODE *head);
void print_list(NODE *head);
void iter_node(NODE *head);
void free_memory(NODE *head);


int main() {
  NODE *head;

  head = ( NODE *) malloc(sizeof(NODE));
   /*creating root or head node globally that would help us doing further operation*/
  add_node(head);
  print_list(head);
  free_memory(head);


  /* code */
  return 0;
}




/*recursively add node/ chaining the head.............*/
void add_node(NODE *head) {
      scanf("%d", &head->value);
      if ((getchar() == 'q')) { /*if pressed 'q' (quit),meet the base case......*/
		       head->next_address = NULL;
      }

      else  {
             head->next_address = ( NODE *) malloc(sizeof(NODE));
            //printf("val: %d self: %p point: %p\n", head->value, head, head->next_address);
            /*head will point to the next allocated address:
	          head -> 0x11b
	          head-> head-> 0x11c
	          head -> head-> head -> 0x11d
	          head -> head -> head -> head -> NULL (when the base case met)*/
             add_node(head->next_address);
   }       /*recursively passing the address of next created linked node*/
}



void print_list(NODE *head) {
     NODE *read_from = head;
     printf("list : \n");
     while (read_from->next_address != NULL) {
            printf("%d -> ", read_from->value);
            read_from = read_from->next_address;
     }
     printf("[NULL]%p\n", read_from->next_address);
}

void free_memory(NODE *head) {
     while (head->next_address != NULL) {
            NODE *cache = head;
            head = head->next_address;
            free(cache);
     }
     //printf("val: %d address: %p\n", head->value, head->next_address);
}

