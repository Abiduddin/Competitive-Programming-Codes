#include <stdlib.h>
#include <stdio.h>

struct node
{
    int x;
    struct node *next;
};

struct node *head;

void insert(int a)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->x=a;
    temp->next=head;
    head=temp;
}
void print(void)
{
    struct node *temp=head;
    printf("List is: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->x);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    int i,j,k;
    head=NULL;
    printf("How many numbers?\n");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf("The number: ");
        scanf("%d",&k);
        insert(k);
        print();
    }
}
