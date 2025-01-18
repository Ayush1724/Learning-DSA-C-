#include <iostream>
using namespace std;
void delFirst(int arr[],int s){
	cout<<endl;
	for(int i=0;i<s;i++){
		arr[i]=arr[i+1];
	}
	cout<<"Updated Array :- ";
	for(int i=0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main ()
{ int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
int s=sizeof(arr)/4;
cout<<"Origanl Array :- ";
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
}
delFirst(arr,s);
s--;
delFirst(arr,s);
s--;
delFirst(arr,s);
s--;
delFirst(arr,s);
s--;
delFirst(arr,s);
s--;
return 0;
}
