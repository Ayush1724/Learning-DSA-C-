#include <iostream>
using namespace std;
#define n 5
int f=-1,r=-1;
int queue[n];
void enqueue(int x){
	if(r==n-1){
		cout<<"Queue is full"<<endl;
		return;
	}
	if(f==-1){
		f=0;
	}
	r++;
	queue[r]=x;
	cout<<"You add new element in queue :- "<<x<<endl;
}

int main ()
{
	enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);

return 0;
}
