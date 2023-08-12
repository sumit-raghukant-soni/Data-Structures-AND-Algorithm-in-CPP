#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        this -> val = data;
    }
    public:
    void insertAtTail(Node* &head, Node* &tail, int data){
        if(head == NULL){
            head = new Node(data);
            tail = head;
            tail -> next = NULL;
        }
        else{
            Node* temp = new Node(data);
            temp -> next = NULL;
            tail -> next = temp;
            tail = temp;
        }
    }

    void insertAtPosition(Node* &head, Node* &tail, int pos, int data){
        if(head == NULL){
            insertAtTail(head, tail, data);
        }
        else if(pos == 1){
            Node* temp = new Node(data);
            temp -> next = head;
            head = temp;
        }
        else{
            Node* curr = head;
            pos-=2;
            while(pos && curr != NULL){
                curr = curr -> next;
                pos--;
            }
            Node* next = curr->next;
            curr->next = new Node(data);
            curr = curr->next;
            curr->next = next;
            if(curr->next ==  NULL)
                tail = curr;
        }
    }
};

bool isEmpty(Node* root){
    if(root == NULL)
        return true;
    return false;
}

void printList(Node* root){
    while(root != NULL){
        cout << root->val << " ";
        root = root->next;
    } cout << endl;
}

int main(){

    Node* root = NULL;
    Node* tail = NULL;
    root->insertAtTail(root, tail, 10);
    root->insertAtTail(root, tail, 20);
    root->insertAtTail(root, tail, 30);
    root->insertAtTail(root, tail, 40);

    printList(root);

    root->insertAtPosition(root, tail, 3, 25);

    printList(root);

    cout << "Is the list empty or not: " << isEmpty(root);

    return 0;
}