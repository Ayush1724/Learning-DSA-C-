#include <iostream>
using namespace std;
#define n 5
int arr[n],f=-1,r=-1;
void show(){
	cout<<"\n Element of Queue: \n";
	for(int i=f;i<=r;i++){
		cout<<arr[i]<<" ";
	}
	
}
void insert(int x){
	if(r==n-1){
		cout<<"Queue is full/Overflow "<<endl;
		return;
	}
	if(f==-1){
		f=0;
	}
	r++;
	arr[r]=x;
	cout<<"Your insert new element in Queue :- "<<x<<endl;
}

int main ()
{
insert(11);
insert(22);
insert(33);
insert(44);
insert(55);
insert(66);
insert(77);

return 0;
}
