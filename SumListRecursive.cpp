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

int sumList(Node *head) {
    Node *temp = head;
    static int total = 0;
    if (temp==NULL)
        return total;
    total+=temp->data;
    return sumList(head->next);
}

int main() 
{
    Node *head1 = NULL;
    addtohead(head1,7);
    addtohead(head1,6);
    addtohead(head1,5);
    cout << endl << sumList(head1) << endl;
    return 0;
}