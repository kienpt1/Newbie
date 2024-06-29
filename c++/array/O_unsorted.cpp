#include<iostream>
using namespace std;

int binarySearch(int arr[], int low,int high, int key){
    if(low<high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(key==arr[mid]){
        return mid; 
    }
    if(key>arr[mid]){
        return binarySearch(arr,(mid+1),high, key);
    }
    else{
        return binarySearch(arr,low,mid-1,key);
    }
}
int insertSorted(int arr[], int n, int key, int capacity) 
{ 
    // Cannot insert more elements if n is already 
    // more than or equal to capacity 
    if (n >= capacity) 
        return n; 
  
    int i; 
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) 
        arr[i + 1] = arr[i]; 
  
    arr[i + 1] = key; 
  
    return (n + 1); 
} 

int deleteElement(int arr[], int n, int key) 
{ 
    // Find position of element to be deleted 
    int pos = binarySearch(arr, 0, n - 1, key); 
  
    if (pos == -1) { 
        cout << "Element not found"; 
        return n; 
    } 
  
    // Deleting element 
    int i; 
    for (i = pos; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    return n - 1; 
} 
int main() 
{ 
    // Let us search 3 in below array 
    int arr[] = { 5, 6, 7, 8, 9, 10 }; 
    int n, key; 
  
    n = sizeof(arr) / sizeof(arr[0]); 
    key = 10; 
    insertSorted(arr, n, key, n); 
  
    // Function call 
    cout << "Index: " << binarySearch(arr, 0, n - 1, key) 
         << endl; 
    return 0; 
} 