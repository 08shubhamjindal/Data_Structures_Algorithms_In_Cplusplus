#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
   struct node* next;
};
struct node *head;
void insert(int x)
{
    node *temp = new node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
void print()
{
    struct node* temp = head;
    cout<<"List is  " ;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    head = NULL;
    cout<<"How many Numbers want to insert in begining"<<endl;
    int n,i,x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"enter the no"<<endl;
        cin>>x;
        insert(x);
        print();
    }
}