#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	//constructor
	Node()
	{

	}

	Node(int data)
	{
		this->data=data;
		this->next=NULL; //NULL pointer
	}
};

void InsertNodeAtTail(Node* &head, int val)
{
	//create a node at heap memory
	Node* newNode=new Node(val);

	if(head==NULL)
	{
		// Linked List is empty
		// No chain there
		head=newNode;
		return;
	}

	// go to last node i.e tail node
	// Initialize a ptr of Node type

	Node *ptr=head;//i.e tempPtr points to starting node of linked list
	// go to last node
	while(ptr->next!=NULL)
	{
		// store address of next node in ptr
		ptr=ptr->next;
	}
	//ptr points to tail Node
	ptr->next=newNode;
}

void printList(Node* &head)
{
	if(head==NULL)
	{
		//Linked List is Empty
		cout<<"LinkedList is Empty"<<endl;
		return;
	}

	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;


}

void deleteAtTail(Node* &head)
{
	if(head==NULL)
	{
		cout<<"Linked List is Empty"<<endl;
		return;
	}

	Node* ptr=head;

	//List is of size 1
	if(ptr->next==NULL)
	{
		//starting node next is null
		head=NULL;
		return;
	}

	//otherwise
	while(ptr->next!=NULL && ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	//ptr points to second last element
	ptr->next=NULL;

}

void InsertNodeAtFront(Node* &head, int val)
{
	Node* newNode=new Node(val);
	//if LL is empty
	if(head==NULL)
	{
		head=newNode;
		return;
	}

	//otherwise
	newNode->next=head;
	head=newNode;
}

void deleteAtFront(Node* &head)
{
	//LL is empty
	if(head==NULL)
	{
		cout<<"Linked List is empty"<<endl;
		return;
	}
	Node* ptr=head; //ptr points to first node
	//One Size LL
	if(ptr->next==NULL)
	{
		head=NULL;
		return;
	}

	//LL size>1
	// go to second node
	ptr=ptr->next; //ptr points to second node
	head->next=NULL; //lose connection of first node from list
	head=ptr; //head points to second node
	// i.e connection lose from first node
	//i.e first node is supposed to be deleted from Linked List

}

int sizeOfLL(Node* head)
{
	int cnt=0;
	Node* temp=head;
	while(temp!=NULL)
	{
		cnt++;
		temp=temp->next;
	}
	return cnt;
}

Node* FindMiddleNodeOfLL(Node* head)
{
	//fast and Slow Approach

	Node *fast=head, *slow=head;
	// Node* slow=head;

	while(fast->next!=NULL && fast->next->next!=NULL)
	{
		slow=slow->next; //take one jump at once
		fast=fast->next->next; //take 2 jump at once
	}

	return slow;

}

void InsertNodeAtMiddle(Node* &head, int val)
{
	Node* newNode=new Node(val);
	//LL is Empty
	if(head==NULL)
	{
		head=newNode;
		return;
	}

	Node* ptr=head;
	// LL size is 1
	if(ptr->next==NULL)
	{
		ptr->next=newNode;
		return;
	}

	//otherwise
	//Find MiddleNode
	Node* middle=FindMiddleNodeOfLL(head);
	Node* p2, *p1;
	p2=middle;
	p1=p2->next;

	//append new vreated node in b/w p1 and p2 pointed Node
	p2->next=newNode;
	newNode->next=p1;

}

void deleteAtMiddle(Node* head)
{
	//LL is empty
	if(head==NULL)
	{
		cout<<"Linked List is Empty"<<endl;
		return;
	}

	// LL size is of 1
	if(head->next==NULL)
	{
		head=NULL;
		return;
	}

	//otherwise
	Node* middle=FindMiddleNodeOfLL(head);
	Node* ptr=head;
	while(ptr->next!=middle)
	{
		ptr=ptr->next;
	}
	//ptr->next points to MiddleNode
	ptr->next=middle->next;
	middle->next=NULL;
}

int main()
{
	Node* head=NULL;
	printList(head);

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int input;
		cin>>input;

		InsertNodeAtTail(head,input);
	}

	printList(head);

	deleteAtTail(head);

	InsertNodeAtFront(head,5);

	printList(head);
	deleteAtFront(head);
	printList(head);
	cout<<"size Of Linked List is "<<sizeOfLL(head)<<endl;

	Node* middlNode=FindMiddleNodeOfLL(head);
	cout<<"middlNode of LL is "<<middlNode->data<<endl;

	InsertNodeAtMiddle(head, 25);
	printList(head);
	deleteAtMiddle(head);
	printList(head);
	deleteAtMiddle(head);
	printList(head);



//NKr codes

}