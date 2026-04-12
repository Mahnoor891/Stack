#include<iostream>
using namespace std;
class Stack{
    private:
    int top;
    int stack[10];
    public:
    Stack(){
    top = -1;
    }
    void push(int val){
        if(top >=9){
            return;
        }
          top++;
        stack[top] = val;
    }
    int pop(){
        if(top== -1){
            cout<<"\n Stack is Empty";
            return 0;
        }
       int val = stack[top];
        top--;
        return val;
    }
    int peek(){
        if(top== -1){
            cout<<"\nStack is empty";
            return 0;
        }
        return stack[top];
    }
    void display(){
        for(int i = top; i>= 0; i--){
            cout<<"\nStack elemets: "<< stack[i]<< " ";
        }
    }
};
    void fillStack(Stack&s, int stack[], int n){
        if(n==0){
            return;
        }
        s.push(stack[0]);
         fillStack(s, stack +1, n -1);
    }
    void PopStack(Stack&s,int n){
        if(n==0){
            return ;
        }
        s.pop();
        PopStack(s, n -1);
    }
   int main(){
    Stack s;
    int arr[] = {1, 20, 89, 52, 77, 99, 10, 12, 13, 67,44,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    fillStack(s,arr, n );
    cout<<"\nThe top element(peek): "<< s.peek();
    cout<<"\nElements after peak: "; s.display();
    PopStack(s, 2);
    cout<<"\nStack after two elemts are popped: " ; s.display();
    return 0;

}