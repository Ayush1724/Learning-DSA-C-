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
void insertPos(int pos , int x){
	Node *newNode= new Node;
	newNode->data=x;
	if(pos==1){
		newNode->next=head;
		head=newNode;
		return;
	}
	Node *temp = head;
	
	for(int i=1;i<pos-1 && temp!=NULL;i++){
		temp = temp->next;
	}
	newNode->next=temp->next;
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
void deleteAtFirst(){
	if(head==NULL){
		cout<<"Linked List is Already Empty "<<endl;
		return;
	}
	Node *temp=head;
	head =temp->next;
	delete temp;
}
void deleteAtLast(){
	if(head==NULL){
		cout<<"Linked List is Already Empty "<<endl;
		return;
	}
	if(head->next==NULL){
		head=head->next;
		delete head;
	}	
	Node *temp=head;
	while(temp->next->next!=NULL){
		temp = temp->next;
	}
	delete temp->next;
	temp->next=NULL;
	}

int main ()
{insert(11);
insert(22);
insert(33);
insertLast(100);
insertPos(3,500);
show();
deleteAtFirst();
show();
insert(44);
insert(55);
insert(66);
insertLast(101);
show();

return 0;
}
