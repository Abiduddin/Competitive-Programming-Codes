#include <stdio.h>
#include <stdlib.h>


struct link_list
{
    int v;
    struct link_list *next;
};typedef struct link_list item ;

int main()
{
    item *node,*start;
    int n,m;
    printf("Enter Number of item: ");
    scanf("%d",&n);

    start =(item*)malloc(sizeof(item));
   // start->next=NULL;
    node=start;

    while(n--)
    {
        printf("Enter item: ");
        node->next=(item*)malloc(sizeof(item));
        scanf("%d",&node->v);
        node=node->next;



    }
    node->next=NULL;
    node=start;

    while(node->next!=NULL)
    {
        printf("%d ",node->v);
        node=node->next;
    }

}
