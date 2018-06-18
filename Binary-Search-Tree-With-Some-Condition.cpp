// Given an array A of N integers, classify it as being Good Bad or Average. It is called Good, if it contains exactly X distinct integers, Bad if it contains less than X distinct integers and Average if it contains more than X distinct integers.

// Input format:
// First line consists of a single integer T denoting the number of test cases.
// First line of each test case consists of two space separated integers denoting N and X.
// Second line of each test case consists of N space separated integers denoting the array elements.

// Output format:
// Print the required answer for each test case on a new line.

// Constraints:


// SAMPLE INPUT

// 4
// 4 1
// 1 4 2 5
// 4 2
// 4 2 1 5
// 4 3
// 5 2 4 1
// 4 4
// 1 2 4 5

// SAMPLE OUTPUT

// Average
// Average
// Average
// Good

#include <iostream>
using namespace std;
struct node{
    long int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(long int data)
{
    // struct node *temp=(node*)malloc(sizeof(node));
    node *temp = new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
struct node* insert(struct node *root,long int data)
{
    if(root==NULL)
    {
     root = newnode(data);
    }
    else
    {
        if(data < root->data)
         root->left = insert(root->left,data);
         else if(data>root->data)
         root->right=insert(root->right,data); 
    }
    return root;
}
int noofnodes(struct node* root)
{
    if(root==NULL)
    return 0;
    else
    {
        int lnodes=noofnodes(root->left);
        int rnodes=noofnodes(root->right);
        return (lnodes+rnodes+1);
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x;
        cin>>n>>x;
        long arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        struct node *root=NULL;
        for(int j=0;j<n;j++)
            root=insert(root,arr[j]);
        if(noofnodes(root)==x)
        cout<<"Good\n";
        else if(noofnodes(root)>x)
        cout<<"Average\n";
        else
        cout<<"Bad\n";
    }
    return 0;
}