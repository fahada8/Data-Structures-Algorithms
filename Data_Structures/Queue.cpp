#include <bits/stdc++.h>

#define MAX_SIZE 10

using namespace std;

class Queue {
     private:
          int items[MAX_SIZE], front, rear;
     public:
          Queue() {
               front = -1;
               rear = -1;
          }
          
          void enQueue(int element) {
               if (front == 0 && rear == MAX_SIZE - 1) {
                    cout<<"Queue is full"<<endl;  
                    }
               else {
                    if (front == -1) 
                    front = 0;
                    items[rear++] = element;
                    cout<< "Inserted -> " << element << endl;
               }
          }
          int deQueue() {
               int element;
               if (front == -1) {
                    cout << "Queue is empty" << endl;
                    } 
               else {
                    element = items[front-1];
                    if (front >= rear) {
                         front = -1;
                         rear = -1;
                         } 
                    else {
                         front++;
                    }
                    cout <<"Deleted -> " << element << endl;
                    return (element);
               }
          }

};

int main() {
  Queue q;

  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);
  q.enQueue(6);
  q.enQueue(7);
  q.deQueue();
  q.deQueue();
  q.deQueue();

  return 0;
}