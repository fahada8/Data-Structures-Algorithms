#include <bits/stdc++.h>
#define MAX_SIZE 50
using namespace std;

class Stack {
     private:
          int arr[MAX_SIZE], top;
     public:
          Stack() {
               top = -1;
          }
          
          void Push(int value) {
               if (top != MAX_SIZE) {
                    arr[++top] = value;
                    cout<<"Data Pushed -> "<<value<<endl;
               }
               else
                    cout<<"Stack Overflow!";
          }

          void Pop() {
               if(top == -1){
                    cout<<"Stack Underflow!"<<endl;
               }
               else {
                    cout<<"Popped Value -> "<<arr[top--]<<endl;
                    }
          }

          void Show() {
               if(top >= 0) {
                    cout<<"Stack elements : ";
                    for(int i=top; i>=0; i--)
                    cout<<arr[i]<<" ";
                    cout<<endl;
                    } 
               else
                    cout<<"Stack is empty";
          }
};

main() {
     Stack s;
     s.Push(5);
     s.Push(10);
     s.Push(15);
     s.Push(20);
     s.Push(25);
     s.Push(30);
     s.Push(35);
     s.Pop();
     s.Pop();
     s.Pop();
     s.Show();

     return 0;
}