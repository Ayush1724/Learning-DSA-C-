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
	cout<<head->data<<"===>"<<head->next->data<<"===>"<<head->next->next->data;
	return 0;
}