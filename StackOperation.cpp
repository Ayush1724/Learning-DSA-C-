#include <iostream>
using namespace std;
int stack[5],n=5,top=-1;
void push(int a){
	if(top==n-1){
		cout<<"OverFlow :-";
	}
	else{
		top++;
		stack[top]=a;
	}
}
void pop(){
	if(top==-1){
		cout<<"Stack is already Empty/Underflow";
		return;
	}
	cout<<"Pop return (Deleted) element : "<<stack[top]<<endl;
	top--;
}
int main ()
{

return 0;
}
