#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
// how r u bro
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<head->data<<"-->"<<head->next->data<<"-->"<<head->next->next->data<<;
    return 0;
}
