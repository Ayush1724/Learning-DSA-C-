#include <iostream>
using namespace std;
int main(){
	int a,b=1;
	cout<<"Enter the number :- ";
	cin>>a;
	for(int i=a;i>=1;i--){
		b=b*i;
	}
	
	cout<<"Factorial of number is :- " <<b;
	return 0;
}