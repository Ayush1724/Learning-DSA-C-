#include <iostream>
using namespace std;
int arr[100];
int main ()
{
	cout<<"Enter the size of array (max 9) :- ";
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Orignal array :- "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	int x;
	cout<<"Enter the new data :- ";
	cin>>x;
	
	for(int i=n;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=x;
	n++;
	
	int y;
	cout<<"Enter other new data :- ";
	cin>>y;
	
	for(int i=n;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=y;
	n++;
	
	cout<<"Updated array:- "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

return 0;
}
