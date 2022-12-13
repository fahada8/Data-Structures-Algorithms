#include <bits/stdc++.h>
#define MAX_SIZE 10 

using namespace std;

void BubbleSort(int arr[MAX_SIZE]) {
     for (int i=0; i < MAX_SIZE; i++) {
          for (int j=0; j < MAX_SIZE - 1 - i; j++) {
               if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
               }
          }
     }
     cout<<"Sorted Array = ";
     for(int i = 0; i < MAX_SIZE; i++) {
          cout<<arr[i]<<" ";
     }
}
main() {

     int arr[MAX_SIZE]  = {25,15,5,10,30,45,35,40,50,20};
     BubbleSort(arr);
}

/*   Time Complexity  : O(n^2)
     Space Complexity : O(1)
*/