#include <iostream>
using namespace std;
# define n 5
int arr[n],f=-1,r=-1;
void show(){
	cout<<"\nElement of the queue is :- \n";
	for(int i=f;i<=r;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnd of the queue\n";
}
void insert(int x){
	if(r==n-1){
		cout<<"Queue is already full"<<endl;
	}
	if(f==-1){
		f=0;
	}
	r++;
	arr[r]=x;
	cout<<"Inserted element in the queue is :- "<<x<<endl;
}
void del(){
	if(f==-1){
		cout<<"\nQueue is alredy empty\n";
	}
	cout<<"Deleted element in the Queue is :- "<<arr[f]<<endl;
	f++;
	if(f>r){
		f=-1;
		r=-1;
	}
}
void peek(){
	cout<<"\nPeek of queue is :-"<<arr[f]<<endl;
}

int main ()
{ insert(11);
    insert(22);
    insert(33);
    show();
    insert(44);
    insert(55);
    show();
    insert(66);
    insert(77);
    show();
    del();
    del();
    show();
    insert(66);
    del();
    del();
    del();
    show();
    insert(88);
    insert(99);
    del();
    show();
    peek();

return 0;
}
