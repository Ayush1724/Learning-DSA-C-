#include <iostream>
using namespace std;
void bbl_sort(int arr[],int s){
	for(int i=0;i<s;i++){
		for(int j=i+1;j<s;j++){
			int t;
			if(arr[i]>arr[j]){
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
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
bbl_sort( arr, n);
show( arr, n);
return 0;
}
