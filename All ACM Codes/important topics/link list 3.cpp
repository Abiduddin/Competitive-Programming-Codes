#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node* next;
};

//struct Node* head;

Node* insert(Node** head,int x)
{
    struct Node* temp=(Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=*head;
    *head=temp;
    return *head;
}
void print(Node* head)
{

    printf("List is: ");
    while(head!=NULL)
    {
        printf(" %d",head->data);
        head=head->next;
    }
    printf("\n");
}

int main()
{
    Node* head=NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&x);
        insert(&head,x);
        print(head);
    }
}
