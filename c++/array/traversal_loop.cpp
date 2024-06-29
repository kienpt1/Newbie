#include<iostream>
#include<algorithm>

using namespace std; 

void traverseArray(int arr[],int start, int end){
    int temps;
    while (start<end)
    {
        int temps=arr[start];
        arr[start]=arr[end];
        arr[end]=temps;
        start++;
        end--;
    }
    
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,arr+size);
    traverseArray(arr,0, size-1);
    print(arr,size);
    
}