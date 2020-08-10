// How to recursively insert the elements in a linked list and can you traverse recursively as well?

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node *newNode(int data) {
    Node *new_node= new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


Node* insert(Node* head_reference, int new_data) {
    if (head_reference == NULL) {
        return newNode(new_data);
    }
    else {
        head_reference->next = insert(head_reference->next, new_data);
    }
    return head_reference;
}

void printList(Node* node) {
    if (node == NULL) {
        return;
    }
    cout<<" "<<node->data<<endl;
    printList(node->next);

}

int main() {
    Node *head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    printList(head);
    return 0;
}