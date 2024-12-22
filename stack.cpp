//Stack implementation using array
#include<iostream>
using namespace std;
#define N 5
int arr[N];
int top = -1;

void push (int data){
	//step 1: Check overflow condition
	if(top==N-1){
		cout<<"Over Flow";
		return;
	}
	else{
		//step 2: Increment Top by 1
		top++;//0
		//step 3: Assign data into top
		arr[top]=data;
		cout<<"Data insert success into the top of the stack :- "<<data<<endl;
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
}