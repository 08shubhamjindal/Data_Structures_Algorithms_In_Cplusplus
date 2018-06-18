// Once Monk was watching a fight between an array and a tree, of being better. Tree got frustrated and converted that array into a Binary Search Tree by inserting the elements as nodes in BST, processing elements in the given order in the array. Now Monk wants to know the height of the created Binary Search Tree.

// Help Monk for the same.

// Note:

// 1) In Binary Search Tree, the left sub-tree contains only nodes with values less than or equal to the parent node; the right sub-tree contains only nodes with values greater than the parent node.

// 2) Binary Search Tree with one node, has height equal to 1.

// Input Format :

// The first line will consist of 1 integer N, denoting the number of elements in the array.
// In next line, there will be N space separated integers,
// , where

// , denoting the elements of array.

// Output Format

// Print the height of the created Binary Search Tree.

// SAMPLE INPUT

// 4
// 2 1 3 4

// SAMPLE OUTPUT

// 3

// Explanation

// N=4

// Insert 2. It becomes root of the tree.
// Insert 1. It becomes left child of 2.
// Insert 3. It becomes right child of 2.
// Insert 4. It becomes right child of 3.
// Final height of tree = 3.

#include<bits/stdc++.h>
using namespace std;
struct binary
{
    int data;
    binary *left;
    binary *right;
};
binary *newNode(int data)
{
    binary *node = new binary();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
binary *insert(binary *root ,int data)
{   
    if(root==NULL)
    {
    root = newNode(data);       
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left , data);
    }
    else
    {
        root->right =insert(root->right , data);
    }
    return root;
}
int depth(binary* root)
{
    if(root==NULL)
    return 0;
    else
    {
        int ldepth = depth(root->left);
        int rdepth = depth(root->right);
        if(ldepth>rdepth)
        {
            return ldepth+1;
        }
        else
        {
            return rdepth+1;
        }
    }
}
int main()
{   long long int i,n;
    cin>>n;
long long int a[n+1];
    binary* root;
    root = NULL;
  for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
     root = insert(root , a[i]);
    }
    cout<<depth(root);
    
}
