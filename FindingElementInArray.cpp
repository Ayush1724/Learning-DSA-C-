#include <iostream>
using namespace std;

int main ()
{int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,19,20};
int s=sizeof(arr)/4;
int n;
cout<<"Enter the number you want to find :- ";
cin>>n;
bool abc=true;
for(int i=0;i<s;i++){
	if(arr[i]==n){
		cout<<"Element is found on position "<<i+1<<endl;
		abc=false;
		break;
	}
}
if(abc){
	cout<<"Element is not found ";
}

return 0;
}
