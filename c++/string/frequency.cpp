// #include <bits/stdc++.h>
// using namespace std;
 
// const int MAX = 26;
 
// // Function to print the frequency
// // of each of the characters of
// // s in alphabetical order
// void compressString(string s, int n)
// {
//     // To store the frequency
//     // of the characters
//     int freq[MAX] = { 0 };
 
//     // Update the frequency array
//     for (int i = 0; i < n; i++) {
//         freq[s[i] - 'a']++;
        
//     }
//     cout<<freq[MAX];

 
//     // // Print the frequency in alphatecial order
//     // for (int i = 0; i < MAX; i++) {
 
//     //     // If the current alphabet doesn't
//     //     // appear in the string
//     //     if (freq[i] == 0)
//     //         continue;
 
//     //     cout << (char)(i + 'a') << freq[i];
//     // }
// }
 
// // Driver code
// int main()
// {
//     string s = "geeksforgeeks";
//     int n = s.length();
 
//     compressString(s, n);
 
//     return 0;
// }
#include<iostream> 
#include<string> 
using namespace std; 

const int Max=26; 
int main(){
    string word="hello world"; 
    int freq[Max]={0}; // 26
    for(int i=0;i<word.length();i++){
        //  freq[word[i]-'a']++;// increment count word 1 have b count 1
        freq[word[i]-'a']++;
    }
    for(int i=0;i<=Max;i++){
        cout<<(char)(i + 'a')<<freq[i]; // char word - 'a' == number --> word=i+number 
    }

}