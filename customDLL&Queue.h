#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node *next;
Node *previous;
Node(int data){
{
data=data;
next=NULL;
previous=NULL;
}
this -> data = data;
}
};
class DLL
{
public:
Node *head= NULL;
Node *newdata= NULL;
void add(int item)
{
newdata = new Node(item);
if(head==NULL)
{
head = newdata;
}
else
{
Node *temp = head;
while(temp -> next != NULL ){
temp = temp -> next;
}
temp -> next = newdata;
newdata -> next = NULL;
newdata->previous=temp;
}
}

void display()
{
Node *temp= head;
while(temp!= NULL)
{
cout<<temp->data<<"-> ";
temp= temp->next;
}
cout<<endl;
}
void TrainDetails (int train_num)
{
   if (train_num==1130)
	{
		cout<<"\nTrain:\t\t\tSuborno Express"<<endl;
		cout<<"\nDestination:\t\tChattogram–Dhaka"<<endl;
		cout<<"\nDeparture:\t\t12am "<<endl;
	}
	if (train_num==1131)
	{
		cout<<"\nTrain:\t\t\tGodhuli Express"<<endl;
		cout<<"\nDestination:\t\tDhaka-Chattogram"<<endl;
		cout<<"\nDeparture:\t\6am"<<endl;
	}
	if (train_num==1132)
	{
		cout<<"\nTrain:\t\t\tParabat Express"<<endl;
		cout<<"\nDestination:\t\tDhaka–Sylhet"<<endl;
		cout<<"\nDeparture:\t\t8am"<<endl;
	}
	if (train_num==1133)
	{
		cout<<"\nTrain:\t\t\tJayantika Express"<<endl;
		cout<<"\nDestination:\t\tSylhet-Dhaka"<<endl;
		cout<<"\nDeparture:\t\t1am"<<endl;
	}
	if (train_num==1230)
	{
		cout<<"\nTrain:\t\t\tSuborno Express"<<endl;
		cout<<"\nDestination:\t\tChattogram–Dhaka"<<endl;
		cout<<"\nDeparture:\t\t6am "<<endl;
	}
	if (train_num==1231)
	{
		cout<<"\nTrain:\t\t\tGodhuli Express"<<endl;
		cout<<"\nDestination:\t\tDhaka-Chattogram"<<endl;
		cout<<"\nDeparture:\t\t12pm"<<endl;
	}
	if (train_num==1232)
	{
		cout<<"\nTrain:\t\t\tParabat Express"<<endl;
		cout<<"\nDestination:\t\tDhaka–Sylhet"<<endl;
		cout<<"\nDeparture:\t\t2pm"<<endl;
	}
	if (train_num==1233)
	{
		cout<<"\nTrain:\t\t\tJayantika Express"<<endl;
		cout<<"\nDestination:\t\tSylhet-Dhaka"<<endl;
		cout<<"\nDeparture:\t\t4pm"<<endl;
	}



}};
class Queue {

      public:

        Node *head= NULL;

        Node *newdata= NULL;

        void Enque(int item)
        {

            newdata = new Node(item);

            if(head==NULL) {

                head = newdata;

            } else {

                Node *temp = head;

                while(temp -> next != NULL ) {

                    temp = temp -> next;

                }

                temp -> next = newdata;

                newdata -> next = NULL;

            }

        }



        bool isEmpty()
        {

            if(head == NULL)return true;

            else return false;

        }

        void Deque()
        {

            Node* temp = head -> next;

            delete head;

            head = temp;

        }



    };


