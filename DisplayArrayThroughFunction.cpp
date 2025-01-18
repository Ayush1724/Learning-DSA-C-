#include <iostream>
using namespace std;
int arr[100];
void dis(int arr[],int n){
	cout<<"Array data :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}
int main ()
{
	int n;
	cout<<"Enter the size of array (max 9) :- ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	dis(arr,n);

return 0;
}
