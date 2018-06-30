#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node* newnode(int data)
{
    struct node* temp = new node;
    temp->key= data;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *temp)
{
    if(!temp)
    {
        return ;
    }
    else 
    {
       inorder(temp->left);
       cout<<temp->key<<" ";
       inorder(temp->right);
    }
}
void insert(struct node* temp , int key)
{
     queue<struct node*> q;
     q.push(temp);
     while(!q.empty())
     {
         struct node*temp = q.front();
         q.pop();
          if(!temp->left)
          {
              temp->left = newnode(key);
              break;
          }
          else
          {
              q.push(temp->left);
          }
          if(!temp->right)
          {
              temp->right = newnode(key);
              break;
          }
          else
          {
              q.push(temp->right);
          }
     }
}

int main()
{
    struct node* root = newnode(5);
    root->left = newnode(12);
    root->right = newnode(15);
    root->left->left = newnode(74);
    root->right->left = newnode(13);
    root->right->right = newnode(89);
    inorder(root);
    int key = 12;
    insert(root , key);
    cout<<endl;
    inorder(root);
}