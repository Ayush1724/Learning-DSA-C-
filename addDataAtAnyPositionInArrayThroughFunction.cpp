#include <iostream>
using namespace std;
int arr[100];
void addPosition(int arr[],int n){
	cout<<endl;
	cout<<"Orignal array :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int x,pos;
	cout<<"Enter the new data :- ";
	cin>>x;
	cout<<"Enter the position :- ";
	cin>>pos;
	
	for(int i=n;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=x;
	n++;
	
	cout<<"Updated array :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main ()
{int n;
cout<<"Enter the size of array (max 9) :- ";
cin>>n;

for(int i=0;i<n;i++){
	cin>>arr[i];
}
addPosition(arr,n);
addPosition(arr,n);
addPosition(arr,n);
return 0;
}
