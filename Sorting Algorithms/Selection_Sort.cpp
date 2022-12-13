#include <bits/stdc++.h>
#define MAX_SIZE 10
using namespace std;

void SelectionSort(int arr[MAX_SIZE]) {
     for (int i = 0; i < MAX_SIZE - 1; i++) {
          for(int j = i+1; j < MAX_SIZE; j++) {
               if(arr[j] < arr[i]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
               }
          }
     }
     cout<<"Sorted Array : ";
     for(int i = 0; i < MAX_SIZE; i++){
          cout<<arr[i]<<" ";
     }
}
main() {
     int arr[MAX_SIZE]  = {25,15,5,10,30,45,35,40,50,20};
     SelectionSort(arr);
}

/*     
     Time Complexity : O(n^2)
     Space Complexity : O(1)
*/