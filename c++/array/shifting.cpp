#include<iostream>
using namespace std; 
// void rotation(int arr[],int d,int size ){
	// int p=0;
	// while (p<=d)
	// {	
	// 	int last=arr[p];
	// 	for(int i=0;i<size;i++){
	// 		arr[i]=arr[i+1];
	// 	}
	// 	arr[size-1]=last;
	// 	p++;
	// }
	

// }

// void printer(int arr[], int size){
// 	for(int i=0;i<size;i++){
// 		cout<<arr[i];
// 	}
// }

// int main(){
// 	int arr[]={1,2,3,4,5,6};
// 	int size=sizeof(arr)/sizeof(arr[0]);
// 	int d=2;
// 	rotation(arr,d,size);
// 	printer(arr,size);
// }


/// Dual space n-d=arr[i], 
// void rotation(int arr[],int d,int size){
// 	int arr_2[size];
// 	int j=0;

// 	for(int i=d;i<size;i++){
// 		arr_2[j]=arr[i];
// 		j++;
// 	}

// 	for(int i=0;i<=d;i++){
// 		arr_2[j]=arr[i];
// 		j++;
// 	}

// 	for (int i = 0; i < size; i++) {
//         arr[i] = arr_2[i];
//     }

// }
// void printer(int arr[],int size){
// 	for(int i=0;i<size;i++){
// 		cout<<arr[i];
// 	}
// }
// int main(){
// 	int arr[]={1,2,3,4,5,6};
// 	int size=sizeof(arr)/sizeof(arr[0]);
// 	int d=2;
// 	rotation(arr,d,size);
// 	printer(arr,size);
// }
//juggle algorithm 
// find GCD 
// C++ program to implement the above approach
#include <bits/stdc++.h>
using namespace std;
 
/*Function to get gcd of a and b*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    /* To handle if d >= n */
    d = d % n; //10
    
    int g_c_d = gcd(d, n);
    
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        cout<<"temps"<<temp;
        int j = i;
        cout<<"j:"<< j;
 
        while (1) {
            int k = j + d; // index 11,12,13,14,15
            cout<<"k:"<< k;
            if (k >= n)   // k>=n 16k=16-15=1
                k = k - n;
 
            if (k == i) // load up to end then stop 
                break;
 
            arr[j] = arr[k]; // swap the list of end to the list of start 
            j = k; 
        }
        arr[j] = temp;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
 
// Driver's code
int main()
{
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 10;
    // Function calling
    leftRotate(arr, d, n);
    // printArray(arr, n);
 
    return 0;
}