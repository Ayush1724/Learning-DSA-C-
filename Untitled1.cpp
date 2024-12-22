#include <iostream>
using namespace std;
int main(){
	int a,b,c,fact=1;
	cout<<"Enter the number ";
	cin>>a;
	b=a;
	while(b>0){
		c=b%10;
		fact=fact*c;
		b=b/10;
		
	}
	cout<<"The factorial is :- "<<fact;
	
	
	return 0;
}