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

void combine(Node* &head1, Node* &head2) {
    if (head1 != NULL && head2 != NULL)
    {
        if (head1->next == NULL)
        {
            head1->next = head2;
            head2 = NULL;
        }
        else
            combine(head1->next,head2);
    }
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
    Node *head2 = NULL;
    addtohead(head1,7);
    addtohead(head1,6);
    addtohead(head1,5);
    addtohead(head2,10);
    addtohead(head2,9);
    addtohead(head2,8);
    combine(head1,head2);
    printlist(head1);
    printlist(head2);
    return 0;
}