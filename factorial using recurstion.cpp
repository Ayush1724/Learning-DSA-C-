//factorial using recursion
#include <iostream>
using namespace std;

int fact(int);
int fact(int n){//n is formal argument
if(n==1){//base condition
	return 1;
}else{
	return n*fact(n-1);
}
}
int main(){
	int n;
	cout<<"Enter the number:- ";
	cin>>n;
	
	cout<<"Factorial of the number is :- "<<fact(n);
	return 0;
}