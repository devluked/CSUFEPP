#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void addtohead(Node* &head, int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    
    head = newNode;
}

void insert(Node* &head, int data, int pos)
{
    int counter = 0;                    
    
    Node *temp2 = new Node; //Create temp node 2
    temp2 = head;                     //Set temp node to head
    while (counter < pos-1)       //Iterate to right before position
    {
        temp2=temp2->next;    //Keep assigning pointer to next node in the list
        counter++;
    }
    Node *temp1 = new Node;
    temp1->data = data;
    temp1->next = temp2->next;  //Once at linker before destination, assign next pointer of temp1 to be pointer of position
    temp2->next = temp1;            //Set temp2 next pointer to link to temp1
}

void printlist(Node* &head) {
    Node *temp = new Node;
    temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "***PRINTED LIST***\n";
}

int main() 
{
    Node *head1 = NULL;
    AddToHead(head1,4);
    AddToHead(head1,6);
    AddToHead(head1,7);
    Insert(head1,5,1); //Node, value, position
    printlist(head1);
    return 0;
}