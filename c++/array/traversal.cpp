#include<iostream>
using namespace std; 
void reverseArray(int arr[],int size){
    int reverse[size];
    for(int i=0;i<size;i++){
        reverse[i]=arr[size-1-i];
    }
    
    for(int i=0;i<size;i++){
        cout<<reverse[i];
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);
}