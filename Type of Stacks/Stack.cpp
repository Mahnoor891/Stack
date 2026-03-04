#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node {
    int data;
    Node*next;
};
Node* top = NULL;
void push (int value) {
   Node* tmp =(Node*)malloc(sizeof(Node));
   tmp ->data = value;
   tmp -> next = top;
   top=tmp;
    
}
    
 int pop() {
    if(top == NULL){
        cout<< "Stack underflow";
        return -1;
    }
    Node* curr = top;
    int data = curr ->data;
    top = top->next;
    free(curr);
    return data;
}
void display() {
    Node* curr = top;
    if(curr == NULL) {
        cout<<" Stack is empty";
        return;
    }
    while(curr != NULL) {
        cout<<curr->data <<"," ;
        curr = curr->next;
    }
}
int main () {
    while(true) {
        int choice;
        int data;
        cout<<"\n1.Enter the value to push:  ";
        cout<< "\n2.Enter the value to pop: ";
        cout<< "\n3.Enter the value to display: ";
        cout<<"\n Enter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
            cout<< "Enter the value to push";
            cin>>data;
            push(data);
            break;
        case 2:
        pop();
        break;
        case 3: 
        display();
        break;
        defult: 
        cout<< "Invalid case";
        }
        if(choice == 5) {
            break;
        }
    
}

}


