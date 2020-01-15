#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void addToFront(Node* &head, int el) {
    Node *temp = new Node;
    temp->data = el;
    temp->next = head;
    
    head = temp;
}

void printList(Node* &head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insert(Node* &head, int el, int pos) {
    Node *temp2 = new Node;
    temp2 = head;
    int curr = 0;
    
    if (pos == 0) {
        addToFront(head, el);
    } else {
    while (curr < pos -1) {
        temp2 = temp2->next;
        curr++;
    }
    Node *temp1 = new Node;
    temp1->data = el;
    temp1->next = temp2->next;
    temp2->next = temp1;
    }
}

void combine(Node* &head1, Node* &head2) {
    if (head1!=NULL && head2!=NULL) {
        if (head1->next==NULL) {
            head1->next = head2;
            head2 =NULL;
        } else
            combine(head1->next, head2);
    } 
}

Node *copyList(Node* &head) {
    Node *temp = new Node;
    if (head == NULL) {
        return NULL;
    }
    temp->data = head->data;
    temp->next = copyList(head->next);
    return temp;
}


int main() {
    Node *head = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;
    addToFront(head2, 300);
    addToFront(head2, 150);
    addToFront(head, 20);   
    addToFront(head, 15);
    addToFront(head, 40);
    addToFront(head, 80);
    insert(head, 999, 4);
    printList(head);
    cout << "COPIED LIST" << endl;
    head3 = copyList(head);
    printList(head3);
    combine(head,head2);
    printList(head);
  // deleteList(head);
  //  printList(head);
    

    
    return 0;
}
