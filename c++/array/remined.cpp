#include<iostream> 
using namespace std;
// void traverse(int arr[],int size){

//     for(int i=size-1;i>=0;i--){
//         cout<<arr[i];
//     }
// }
// void traverseswap(int arr[],int size, int start, int stop){
//     int temps;
//     temps=arr[start];
//     arr[start]=arr[stop];
//     arr[stop]=temps;
//     start++;
//     stop--;

// }

// void shifting(int arr[],int id, int size){
//     int arr2[size];

//     int j=0;
//     for(int i=id;i<size;i++){
//         arr2[j]=arr[i];
//         j++;
//     }

//     for(int i=0;i<=id;i++){
//         arr2[j]=arr[i];
//         j++;
//     }
    
//     for(int i=0;i<size;i++){
//         cout<<arr2[i];
//     }
// }

// void reverse(int arr[],int N, int start,int end){
// 	while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
	
// }
// void leftrotation(int arr[],int d, int size){
// 	d=d%size; // assure on bound of array 
// 	reverse(arr,size,0,d-1);
// 	reverse(arr,size,d,size-1);
// 	reverse(arr,size,0,size-1);
// }

// 
// int binaryseach(int arr[],int low, int  hight, int key ){
// 	if(low>hight){
// 		return -1;
// 	}
// 	int mid=low+(hight-low)/2;
// 	if(key==arr[mid]){
// 		return mid;
// 	}
// 	if(key>arr[mid]){
// 		return binaryseach(arr,(mid+1),hight,key);
// 	}else{
// 		return binaryseach(arr,low+1,mid,key);
// 	}
// }

// int main() 
// { 
//     // Let us search 3 in below array 
//     int arr[] = { 5, 6, 7, 8, 9, 10 }; 
//     int n, key; 
  
//     n = sizeof(arr) / sizeof(arr[0]); 
//     key = 10; 
//     cout<< binaryseach(arr, 0, n-1, key); 
	
//     return 0; 
// } 

void printSubArrays(int arr[], int start, int end, int size)
{
   
    // Stop if we have reached the end of the array
	cout<<start<<end;
    if (end == size)
        return;
   
    // Increment the end point and start from 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1, size);
   
    // Print the subarray and increment the starting point
    else {
        printf("[");
        for (int i = start; i < end; i++)
            printf("%d, ", arr[i]);
       
        // cout << arr[i] << ", ";
        printf("%d]\n", arr[end]);
       
        // cout << arr[end] << "]" << endl;
        printSubArrays(arr, start + 1, end, size);
    }
    return;
}
int main()
{
    int arr[] = { 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubArrays(arr, 0, 0, n);
    return 0;
}