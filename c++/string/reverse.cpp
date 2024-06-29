#include<iostream>
#include<string>
using namespace std ; 

string reverseAdd(string inputstring){
    string reverse;
    for(int i=inputstring.length()-1;i>=0;i--){
        reverse+=inputstring[i];
    }
    return reverse;
}

int main(){
    string task="hello world";
    string reverse = reverseAdd(task);
    cout<<"the word reverse is:";
    cout<< reverse << endl;
}