#include <bits/stdc++.h>
#define MAX_SIZE 5

using namespace std;

void InsertionSort(int arr[MAX_SIZE]) {
     int j = 0;
     int key = 0;

     for(int i = 1; i < MAX_SIZE ; i++) {
          key = arr[i];
          j = i - 1;
          
          while(j >= 0 && arr[j] > key) {
               arr[j + 1] = arr[j];
               j = j - 1;
          }
               arr[j + 1] = key;
     }
     for(int i = 0; i < MAX_SIZE; i++) {
          cout<<arr[i]<<" ";
     }
}
main() {
     int arr[MAX_SIZE] = {9,7,3,6,2};
     InsertionSort(arr);
}
