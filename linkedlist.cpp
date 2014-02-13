#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
};
class List {
Node *head;
public:
List() { head = NULL; };
void Print();
void Insert(int data);
};
 
void List::Insert(int x) {
 
Node* temp = new Node();
temp->data=x;
if ( head == NULL )
{temp->next=NULL;
head=temp;}
else
{
temp->next=head;
head=temp;
}
}
void List::Print() {
 
Node *tmp = head;
 
// No nodes
if ( tmp == NULL ) {
cout << "EMPTY" ;
return;
}
 
// One node in the list
if ( tmp->next == NULL ) {
cout << tmp->data;
cout << " --> ";
cout << "NULL";
}
else {
// Parse and print the list
do {
cout << tmp->data;
cout << " --> ";
tmp = tmp->next;
}
while ( tmp != NULL );
 
}
}
int main()
{
List list;
int a,r;
cin>>a;
while(a!=0)
{
r=a%10;
list.Insert(r);
a=a/10;
}
 
 
list.Print();
 
}