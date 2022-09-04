#include<iostream>
using namespace std;
#define max 5
int front=0;
int rear=0;
int queue[max];

void enqueue(){
	int data;
	cout<<"enter element:";
	cin>>data;
	
	if((rear+1)%max==front){
		cout<<"Queue overflow";
	}
	else{
		queue[rear]=data;
		rear=(rear+1)%max;
		cout<<"Element inserted...";
	}
}

void dequeue(){
	if(front==0 && rear==0){
		cout<<"Queue underflow...";
	}
	else{
		cout<<"Deleted element is "<<queue[front];
		front=(front+1)%max;
	}
}

void display(){
	int i=front;
	while(i<rear){
		cout<<queue[i]<<" ";
		i=(i+1)%max;
	}
}

int main(){
	while(true){
		cout<<endl<<"1.enqueue"<<endl;
		cout<<"2.dequeue"<<endl;
		cout<<"3.display"<<endl;
		cout<<"4.exit"<<endl<<endl;
		cout<<"Enter a choice:";
		int ch;
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
	
	
}
