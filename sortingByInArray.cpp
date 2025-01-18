#include <iostream>
using namespace std;

int main ()
{
	int arr[]={1,12,22,5,65,75,954,5416,2,3,44,55,66,22,33,11};
	int s =sizeof(arr)/4;
	int t;
	cout<<"Before Sorting :- "<<endl;;
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<s;i++){
		for(int j=i+1;j<s;j++){
			if(arr[i]>arr[j]){
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	cout<<endl;
	cout<<"After Sorting :- "<<endl;
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	

return 0;
}
