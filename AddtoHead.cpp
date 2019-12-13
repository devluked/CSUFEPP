//AddtoHead

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
    addtohead(head1,7);
    addtohead(head1,6);
    addtohead(head1,5);
    printlist(head1);
    return 0;
}
