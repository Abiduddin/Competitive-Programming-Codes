#include <stdio.h>

void inorder(int n)
{
    if(n==1 || n==2)
    {
        printf(" %d", n);
        return;
    }
    // in inorder, call left child, print parent call right child
    // inorder: call-print-call
    inorder(n-2);
    printf(" %d", n);
    inorder(n-1);
}

void preorder(int n)
{
    if(n==1 || n==2)
    {
        printf(" %d", n);
        return;
    }
    // in preorder, print parent first, then call left and right child
    // preorder: print-call-call
    printf(" %d", n);
    preorder(n-2);
    preorder(n-1);
}

void postorder(int n)
{
    if(n==1 || n==2)
    {
        printf(" %d", n);
        return;
    }
    // in postorder, call left and right child first, then print parent
    // postorder: call-call-print
    postorder(n-2);
    postorder(n-1);
    printf(" %d", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Inorder: ");
    inorder(n);
    printf("\nPreorder: ");
    preorder(n);
    printf("\nPostorder: ");
    postorder(n);
    printf("\n");
    return 0;
}
