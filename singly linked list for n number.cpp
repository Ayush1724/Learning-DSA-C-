//Node creation for Singly Linked list
#include<iostream>
using namespace std;
class Node{
	public:
		int data;//10
		Node *next;

	Node(int data){
		this->data=data;
		next=NULL;
		cout<<"\n Node created ";
		
	}
};
void display(Node *head){
	Node *temp=head;
	
	while(temp!=NULL){
		cout<<"==>"<<temp->data;//==>10==>20==>30==>40
		temp=temp->next;
	}
}

int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
	Node *head=first;
	// connected first Node to Second Node
	head->next=second;
	// connected Second Node to Third Node
	head->next->next=third;
	cout<<"\n Singly Linked List Data ";
	display(head);
	return 0;
}