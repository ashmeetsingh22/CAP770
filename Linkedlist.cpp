#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

// constructor for input data in node
Node(int data)
{
    this->data=data;
    this->next=NULL;
}
void insert( Node* &head)
{
    Node*temp=new Node()
    temp->next=head;
    temp=head;
}

};
int main(){

Node *node1=new Node(10);
cout<<node1->data<<endl;
cout<<node1->next;


return 0;

}