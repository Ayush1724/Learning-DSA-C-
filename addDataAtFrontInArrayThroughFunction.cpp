#include <iostream>
using namespace std;
int arr[100];
void addFirst(int arr[],int n){
	cout<<endl;
	cout<<"Orignal array :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int x;
	cout<<"Enter the new data :- ";
	cin>>x;
	
	for(int i=n;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=x;
	n++;
	
	cout<<"Updated array :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main ()
{
	int n;
	cout<<"Enter the size of array (max 9) :- ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	addFirst(arr,n);
	addFirst(arr,n);
	addFirst(arr,n);

return 0;
}
