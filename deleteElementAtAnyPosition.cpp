#include <iostream>
using namespace std;

int main ()
{int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int s=sizeof(arr)/4;
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
int pos = 1;
while (pos !=-1){
	cout<<"Enter the poistion to delete :- ";
	cin>>pos;
	if(pos<0){
		break;
	}
	
	for(int i=pos;i<s;i++){
		arr[i]=arr[i+1];
	}
	s--;
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

return 0;
}
