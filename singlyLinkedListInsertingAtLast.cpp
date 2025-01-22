#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head=NULL;
void insert(int x){
	Node *newNode=new Node;
	newNode->data=x;
	newNode->next=head;
	head = newNode;
}
void insertLast(int x){
	Node *newNode= new Node;
	newNode->data=x;
	newNode->next=NULL;
	Node *temp=head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}
void show(){
	Node *temp=head;
	cout<<"\nElement of Linked List are :- ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\nEnd of the Linked List";
}

int main ()
{insert(11);
insert(22);
insert(33);
insertLast(100);
show();
insert(44);
insert(55);
insert(66);
insertLast(101);
show();

return 0;
}
