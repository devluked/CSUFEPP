#include <iostream>

struct node {
    int data;
    node *next;
};

class LinkedList {
private:
    node *head;
    int n;
public: 
    LinkedList() : head(NULL), n(0) {}

int size() const
{
    return n;
}
void add(int x)
{
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    
    temp->next = head;
    head = temp;
    n++;
}

void AddAtPosition(int x, int pos)
{
    node *temp1 = new node;
    temp1->data = x;
    temp1->next = NULL;
    int counter = 0;
    if (pos == 0) 
        add(x);
    else if (pos > size()) {
       node *temp2 = new node;
       temp2->data = x;
       temp2->next = NULL;
       temp1 = head;
       while(temp1->next!=NULL)
       {
           temp1 = temp1->next;
           counter++;
       }
       
       temp1->next = temp2;
        n++;
    }
    else  if (pos <= size()){
         node *temp2 = new node;
         temp2 = head;
         while(counter < pos-1) {
            temp2 = temp2->next;
            counter++;
        }
       temp1->next = temp2->next;
       temp2->next = temp1;
        n++;
    }
}

void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data<<std::endl;
        temp = temp->next;
    }
}
};
int main(int argc, char **argv)
{
    LinkedList stack;
	stack.add(5);
    stack.add(6);
    stack.AddAtPosition(3,2);
    stack.add(9);
    stack.add(10);
    stack.add(11);
    stack.AddAtPosition(111,3);
    stack.AddAtPosition(6969,999);
    stack.AddAtPosition(324,100000);
    stack.print();
    
	return 0;
}
