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
	cout<<endl;
	int x;
	cout<<"Enter the new data :- ";
	cin>>x;
	
	arr[n]=x;
	n++;
	
	int y;
	cout<<"Enter the 2nd new data :- ";
	cin>>y;
	
	arr[n]=y;
	n++;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

return 0;
}
