#include<iostream>
using namespace std;
class Stack {
    private:
    int stack [10];
    int top;
    public:
    Stack() {
        top = -1;
    }
void push(int value) {
    if (top == sizeof(Stack)) {
        cout<< "\n Stack overflow";
        return;
    }
    stack[top] = value;
    top++;
}
int pop (int value) {
    if(top == 0) {
        cout<< "Stack underflow";
        return 0;
    }
 value = stack[top];
    top--;
    return value;
}
void display() {
    if (top == -1) {
        cout <<"\n Stack is empty";
        return;
    }
    cout<<" Stack elemnets: ";
    for (int i = top; i >= 0 ; i--){
        cout<< stack[i]<< " ";
    }
    cout<<"\n";
}
};
int main() {
    Stack s;
    s.push(1);
    s.push(20);
    s.push(30);
    s.display();
    int value;
    cout<<"\nPopped: " ;
    cout<< s.pop(1);
    s.display();
}
