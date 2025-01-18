#include <iostream>
using namespace std;

int main ()
{int arr[]={12,33,4,55,6,78,9,100,121,134,14,15,11,666,174,1025,5,50,1,1};
int s =sizeof(arr)/4;
cout<<"Befor sorting :- ";
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
}
int temp;
for(int i=0;i<s;i++){
	for(int j=i+1;j<s;j++){
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
cout<<endl;
cout<<"After sorting :- ";
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
}
return 0;
}
