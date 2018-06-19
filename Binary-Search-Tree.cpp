#include<bits/stdc++.h>
using namespace std;
struct Binary
{
  int data;
  Binary *left;
  Binary *right;
};
Binary *newNode (int data)
{
  Binary *node = new Binary ();
  node->data = data;
  node->left = node->right = NULL;
  return node;
}

Binary *insert (Binary * root, int data)
{
  if (root == NULL)
    {
      root = newNode (data);
    }
  else if (data <= root->data)
    {
      root->left = insert (root->left, data);
    }
  else
    {
      root->right = insert (root->right, data);
    }
  return root;
}

bool Search (Binary * root, int data)
{
  if (root == NULL)
    {
      return false;
    }
  else if (root->data == data)
    {
      return true;
    }
  else if (data <= root->data)
    {
      return Search (root->left, data);
    }
  else
    {
      return Search (root->right, data);
    }
}

int main ()
{
  int i, a[100];
  for (i = 0; i < 5; i++)
    {
      cin >> a[i];
    }
  Binary *root;
  root = NULL;
  for (i = 0; i < 5; i++)
    {
      root = insert (root, a[i]);
    }
  int no;
  cout << "enter the number be searched" << endl;
  cin >> no;
  if (Search (root, no) == true)
    {
      cout << "Found\n";
    }
  else
    {
      cout << "Not Found\n";
    }
//   root = insert(root,15);
//   root = insert(root,15);
//   root = insert(root,15);
//   root = insert(root,15);
//   root = insert(root,15);
}
