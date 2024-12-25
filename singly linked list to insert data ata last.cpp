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
Node * addAtLast(Node *head,int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp= temp->next;
		}
		temp->next=newNode;
	}
	cout<<"\n node added \n";
	return head;
}
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
	head=addAtLast(head,50);
	cout<<"\n print ";
	display(head);
		return 0;
}