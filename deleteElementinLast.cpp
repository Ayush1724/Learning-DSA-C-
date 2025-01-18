#include <iostream>
using namespace std;
void delLast(int arr[],int n){
	cout<<endl;
	for(int i=0;i<n-1;i++){
		cout<<arr[i]<<" ";
	}
}
int main ()
{int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
int s=sizeof(arr)/4;
delLast(arr,s);
s--;
delLast(arr,s);
s--;
delLast(arr,s);
s--;

return 0;
}
