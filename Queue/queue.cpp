#include<iostream>

using namespace std;
#define max 10
int rear=0;
int front=0;
int queue[max];

void enqueue(){
	int data;
	cout<<"Enter element to store into queue:";
	cin>>data;
	
	if(rear==max){
		cout<<"Queue is full"<<endl;
	}
	else{
		queue[rear]=data;
		rear++;
		cout<<"Element inserted successfully..."<<endl;
	}
}

void dequeue(){
	if(front==rear){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<"Deleted the element:"<<queue[front]<<endl;
		front++;
	}
}

void display(){
	for(int i=front;i<rear;i++){
		cout<<queue[i]<<" ";
	}
}
int main(){
	int ch;
	while(true){
		
	
	cout<<endl<<"----- QUEUE -----"<<endl;
	cout<<"1.enqueue"<<endl;
	cout<<"2.dequeue"<<endl;
	cout<<"3.display"<<endl;
	cout<<"4.exit()"<<endl;
	cout<<endl<<"Enter your choice:";
	cin>>ch;
	
	switch(ch){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
	}
	

}
	return 0;
}
