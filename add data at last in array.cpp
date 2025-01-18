#include <iostream>
using namespace std;
int arr[100];
void addDataAtLast(int arr[], int n){
	cout<<"Array Data : ";
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	}
	
int main ()
{ 
cout<<"Enter the size of array : (max 9) ";
int n;
cin>>n;
	
	addDataAtLast(arr,n);
return 0;
}
