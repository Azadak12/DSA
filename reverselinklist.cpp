#include<iostream>
using namespace std;
class node{
public:
int val;
node * next;
node(int data){
    val = data;
    next = NULL;
}
};
// 1->2->3->NULL
void insertathead(node* &head,int value){
    node *new_node= new node(value);
  
    new_node->next=head;
    head = new_node;
}
node * reverseall(node * &head){
    node* prevprt =NULL;
    node * currptr = head;
    while(currptr!=NULL){
        node * nextptr = currptr->next;
        currptr->next= prevprt;
        prevprt= currptr;
        currptr= nextptr;
    }
    node * new_head = prevprt;
    return new_head;
}
void displayList(node* head){
    node * temp= head;
    while(temp!=NULL){
        cout<<temp->val<< " -> ";
        temp= temp->next;
    }
    cout<<" NULL ";
}

int main(){
node * head = NULL;
for(int i =10; i>=0;i--){
insertathead(head,i);
}


displayList(head);
head=reverseall(head);
cout<<endl;
displayList(head);
}