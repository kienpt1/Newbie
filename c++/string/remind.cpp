#include<string> 
#include <iostream>
using namespace std; 

string insert(string word, int ans[]) {
    string start="";
    int j=0;
    for(int i=0;i<word.length();i++){
        if(j<word.length() && i==ans[j]){
            start+="$"; // automatic add sign whel i =1 
            j++; // addition 1 until i==number in array 

        }
        start+=word[i]; // if not add word 
    }
    
    return start;
}

int main() {
    string word = "helloworld";
    int arr[]={1,2,4,5}; 
    string rot=insert(word,arr);
    cout << rot;
    return 0;
}