#include <iostream>
using namespace std;
int BinSearch(int arr[],int s,int key){
	int low,mid,high;
	low=0;
	high=s-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main ()
{int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int s=sizeof(arr)/sizeof(arr[0]);

int key;
cout<<"Enter the key :- ";
cin>>key;

int x=BinSearch(arr,s,key);
cout<<x;

return 0;
}
