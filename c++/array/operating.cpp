#include<iostream>
using namespace std; 

int searching(int arr[],int number, int size){
    for(int i=0;i<size;i++){
        if(number==arr[i]){
            cout<<i;
            return i;
        }
    }
}

int insertEnd(int arr[],int number,int size){
    arr[size]=number;
    return size+1;
}
void insertposition(int arr[], int pos , int number , int size){ 
    int i; 
    for(i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
        cout<<i;
    }
    arr[pos]=number;
}

void Delete(int arr[],int key, int size){
    int pos = searching(arr,key,size);
    for(int i=pos;i<size-i;i++){
        arr[i]=arr[i+1];
    }
}

void printer(int arr[],int size){
    for(int i=0;i<size+1;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int pos = 2;
    int i,number=12;
    cout<<"location of number in array is: " << endl;
    
    // searching(arr,key,size);
    // int n=insertEnd(arr,number,size);
    // for(i=0;i<n;i++){
    //     cout << arr[i];
    // }
    insertposition(arr,pos,number,size);
    printer(arr,size);


}