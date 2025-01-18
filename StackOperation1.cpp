#include <iostream>
using namespace std;
#define n 5
int stack[n],top=-1;
void push(int a){
	if(top==n-1){
		cout<<"Stack is full/Overflow "<<endl;
	}
	else
	{
		top++;
		stack[top]=a;
	}
}
void pop(){
	if(top==-1){
		cout<<"Stack is Empty/Underlow "<<endl;
		return;
	}
	cout<<"Pop return (deleted) element :- "<<stack[top]<<endl;
	top--;
}
void peek(){
	cout<<"Peek element :- "<<stack[top]<<endl;
}
void Disply()
{
    cout<<"Elements of Stack are: "<<endl;
    cout<<""<<endl;
    for(int i=top;i>=0; i--)
    {
       
        cout<<"|\t"<<stack[i]<<"\t|"<<endl;
        cout<<"-----------------"<<endl;
    }
   
    cout<<endl;
}

int main ()
{
	push(11);
    push(12);
    Disply();
    push(13);
    push(14);
    peek();
    Disply();
    push(15);
    push(16);
    Disply();
    push(17);
    Disply();
    pop();
    Disply();
    pop();
    pop();
    pop();
    Disply();
    pop();
    Disply();
    pop();
    Disply();

return 0;
}
