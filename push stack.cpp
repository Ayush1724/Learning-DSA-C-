#include <iostream>
using namespace std;
#define N 5
int arr[N];
int top = -1;

int pop(){
	int r=-1;
	if(top==-1){
		cout<<"\n under flow";
	}
	else{
		r=arr[top];
		top--;
	}
	return r;

}

void push(int data){
	if (top==N-1){
		cout<<"\n Over Flow";
	}
	else {
		top++;
		
		arr[top]=data;\
	cout<<"\n Data insert success into the top of stack :"<<data;	
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	cout<<endl<<endl;
	cout<<"\n Delete top element of the stack :"<<pop();
	cout<<"\n Delete top element of the stack :"<<pop();
	cout<<"\n Delete top element of the stack :"<<pop();
	cout<<"\n Delete top element of the stack :"<<pop();
	cout<<"\n Delete top element of the stack :"<<pop();
	cout<<"\n Delete top element of the stack :"<<pop();
	return 0;
}