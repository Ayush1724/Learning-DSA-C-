#include <iostream>
using namespace std;
void ins_sort(int arr[],int s){
	for(int i=0;i<s;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 and key < arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		
	}
}
show(int arr[],int s){
	cout<<"Element of array : "<<endl;
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int main ()
{int arr[]={92,55,20,12,44,56,75,95,312,12,1,10,23,13};
int n =sizeof(arr)/4;
show(arr, n);
ins_sort( arr, n);
show( arr, n);
return 0;
}
