#include <iostream>
using namespace std;

int main ()
{
int n,n1,n2;
int arr[]={1,2,3,4,5,6,7,8,9,10};
int brr[]={11,12,13,14,15,16,17,18,19,20};
n1=sizeof(arr)/4;
n2=sizeof(brr)/4;
n=n1+n2;
int crr[n];
for(int i=0;i<n1;i++){
	crr[i]=arr[i];
}
for(int i=n1,j=0;i<n;i++,j++){
	crr[i]=brr[j];
}
cout<<"Arrays are :- "<<endl;
for(int i=0;i<n1;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<n2;i++){
	cout<<brr[i]<<" ";
}cout<<endl;
for(int i=0;i<n;i++){
	cout<<crr[i]<<" ";
}
return 0;
}
