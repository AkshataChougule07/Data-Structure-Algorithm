#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};

void insertAtBegin(Node **head){
	int data;
	Node *node=new Node();
	cout<<"Enter data:";
	cin>>data;
	
	if(head==NULL){
		
		node->data=data;
		node->next=NULL;
		*head=node;
	}
	else{
		node->data=data;
		node->next=*head;
		*head=node;
	}
}

void insertAtEnd(Node **head){
	int data;
	Node *node =new Node();
	cout<<"Enter data to insert:";
	cin>>data;
	if(head==NULL){
		node->data=data;
		node->next=NULL;
		*head=node;
	}
	else{
		Node *last=*head;
		while(last->next!=NULL){
			last=last->next;
		}
		node->data=data;
		node->next=NULL;
		last->next=node;
	}
}

void insertAtPosition(Node **head){
		Node *node=new Node();
		Node *temp=*head;
		int data,pos;
		cout<<"Enter data to be inserted:";
		cin>>data;
		cout<<"Enter the position:";
		cin>>pos;
		if(pos==1){
			node->data=data;
			node->next=*head;
			*head=node;
		}
		else{
			for(int i=1;i<pos-1;i++){
				temp=temp->next;
			}
			node->data=data;
			node->next=temp->next;
			temp->next=node;
		}
}

void deleteAtBegin(Node **head){
	Node *temp=*head;
	*head=temp->next;
	delete temp;
}
 
void deleteAtEnd(Node **head){
	 Node *temp=*head;
	 Node *temp1=temp->next;
		 
	 while(temp1->next!=NULL){
	 	temp1=temp1->next;
	 	temp=temp->next;
	 }
	 
	 delete temp1;
	 temp->next=NULL;
}

void deleteAtPosition(Node **head){
	Node *temp=*head;
	int pos;
	cout<<"Enter the position: ";
	cin>>pos;
	
	Node *temp1=temp->next;
	for(int i=1;i<pos-1;i++){
		temp1=temp1->next;
		temp=temp->next;
	}
	temp->next=temp1->next;
	delete temp1;
}
void printList(Node *head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL";
}

int main(){
	Node *head=NULL;
	cout<<"======= Linked List =======";
	while(1){
	cout<<endl<<endl<<"1.Insert at begin"<<endl<<"2.insert at middle"<<endl;
	cout<<"3.insert at end"<<endl<<"4.delete at begin"<<endl;
	cout<<"5.delete at position"<<endl<<"6.delete at end"<<endl;
	cout<<"7.print"<<endl<<"8.exit"<<endl;
	int ch;
	cout<<endl<<"Enter choice:";
	cin>>ch;
	switch(ch){
		case 1:
			insertAtBegin(&head);
			break;
		case 2:
			insertAtPosition(&head);
			break;
		case 3:
			insertAtEnd(&head);
			break;
		case 4:
			deleteAtBegin(&head);
			break;
		case 5:
			deleteAtPosition(&head);
			break;
		case 6:
			deleteAtEnd(&head);
			break;
		case 7:
			printList(head);
			break;
		case 8:
			exit(0);
				
	}
	
	
		
	}
	
	
}
