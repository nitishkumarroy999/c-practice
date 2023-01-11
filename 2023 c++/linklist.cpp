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
	printList(head);
	deleteAtTail(head);
	printList(head);
	deleteAtTail(head);
	printList(head);
	deleteAtTail(head);
	printList(head);
	deleteAtTail(head);
	printList(head);	
	InsertNodeAtTail(head,25);
	printList(head);


}