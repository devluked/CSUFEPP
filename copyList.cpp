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

Node* copyList(Node* &head1) {
	Node* temp1 = head1;
	Node* head2 = nullptr;
	Node* temp2;
    
	while (temp1 != nullptr) {
		Node* copy = new Node;
		copy->data = temp1->data;
		if (head2 == nullptr) {
			copy->next = head2;
			head2 = copy;
		}
		else {
			temp2 = head2;
			while (temp2->next != nullptr) {
				temp2 = temp2->next;
			}
			temp2->next = copy;
		}
		temp1 = temp1->next;
	}
	return head2;
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
    combine(head1,head2);
    printlist(head1);
    printlist(head2);
    Node *copied = copyList(head1);
    printlist(copied);

    return 0;
}