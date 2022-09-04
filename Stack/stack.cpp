#include<iostream>
using namespace std;
#define max 6
int top=0;
int stack[max];
void push(int data){
	if(top==max){
		cout<<"stack overflow...";
	}
	else{
		cout<<"Enter element:";
		cin>>data;
		stack[top]=data;
		top++;
		cout<<"element inserted successfully...";
	}
}

void pop(){
	if(top==0){
		cout<<"stack underflow..."<<endl;
	}
	else{
		cout<<"Popped element:"<<stack[--top];
	}
}
void display(){
	for(int i=0;i<top;i++){
		cout<<stack[i]<<" ";
	}
}
int main(){
	int data,ch;

	cout<<"----- Stack-----"<<endl;
	
	while(1){
	cout<<endl<<"1.push"<<endl;
	cout<<"2.pop"<<endl;
	cout<<"3.display"<<endl;
	cout<<"4.exit"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3:
			cout<<endl<<"Elements of stack:"<<endl;
			display();
			break;
		case 4:
			exit(1);
	}	

	
}
}
