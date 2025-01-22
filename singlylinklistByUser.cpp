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

int main ()
{int i=1;
int x,pos;
while(i){
	cout<<"\nEnter 1 for insert data at first pos"<<endl;
	cout<<"\nEnter 2 for insert data at Last pos"<<endl;
	cout<<"\nEnter 3 for insert data at user choice pos"<<endl;
	cout<<"\nEnter 4 for Display linked list "<<endl;
	cout<<"\nEnter 0 for Exist"<<endl;
	cin>>i;
	if(i==1){
		cout<<"Enter the value of first element :- ";
		cin>>x;
		insert(x);
	}
	else if(i==2){
		cout<<"Enter the value of Last Data :- ";
		cin>>x;
		insertLast(x);
	}
	else if(i==3){
		cout<<"Enter the Pos ";
		cin>>pos;
		cout<<"Enter the data :- ";
		cin>>x;
	insertPos(pos,x);	
	}
	else if(i==4){
		show();
	}
	else if(i==0){
		break;
	}
	else{
		cout<<"Enter the Right Data "<<endl;
	}
}


return 0;
}
