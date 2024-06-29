#include<iostream>
using namespace std; 
// create the function of operation  stack 
// 1.push, check is full if not push in 
// top=capacity-1 the same size-1 in loop from 0 to end 
// if false append like normally 

void push(int arr[], int val,int check, int size ){
    if(check==size-1){
        cout<< " Array space have been full can't sort in ";
    }
    else if(size == 0){
        cout<< " Array is empty ";
    }
    else{
        cout<< " Free " << size-check << " space ";
        arr[check]=val;
    }
}

int pop(int arr[],int check,int size){
    if(check==-1){
        cout<< " array was empty !! "; 
    }else{
        arr[check]=0;
    }
    check=check-1;
    return check;
}

void top(int arr[], int check, int size){
    if(check==-1){
        cout<< " array is empty";
    }else if(check==size-1){
        cout<< "array is full";
    }else{
        cout<<arr[check];
    }
}

void print(int arr[],int size){
    for(int i=0;i<size-1;i++){
        cout<< arr[i];
    }
}
int main(){
    //create a array space 
    int arr[5]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int check=-1;
    for(int i=0;i<size-1;i++){
        if(arr[i]!=-1){
            check++;
        }
    }
    cout<<check;
    // push(arr,4,check,size);
    // print(arr,size);
    // check = pop(arr,check,size);
    // print(arr,size);
    // check = pop(arr,check,size);
    // print(arr,size);
    // cout<<check;

}