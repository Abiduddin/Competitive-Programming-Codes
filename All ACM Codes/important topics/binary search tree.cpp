#include <bits/stdc++.h>
using namespace std;

struct bstnode
{
    int data;
    bstnode* left;
    bstnode* right;

};

bstnode* getnewnode (int data)
{
    bstnode* newnode = new bstnode();
    newnode->data=data;
    newnode->left=newnode->right=NULL;

    return newnode;



}

bstnode* Insert(bstnode* root, int data)
{
    if(root==NULL)
    {
        root=getnewnode(data);
        //return root;
    }
    else if(data <= root->data)
    {
        root->left= Insert(root->left,data);

    }
    else
    {
        root->right= Insert(root->right,data);
    }
    return root;

}



bool Search(bstnode* root,int data)
{
    if(root==NULL) return false;
    else if(root->data == data) return true;
    else if (data<=root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

int main()
{
    bstnode* root =NULL;

    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,3);
    root = Insert(root,44);

    int num;
    cout<<"Enter number be searched\n";
    cin>>num;
    if(Search(root,num)== true) cout<<"Found\n";
    else cout<<"Not found\n";

    return 0;

}
