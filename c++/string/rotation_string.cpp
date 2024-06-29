#include<string>
#include<iostream> 

#include <iostream>
#include <string>
using namespace std;

string recursion(string word, string result, int d, int start, int end) {
    if (start == d) {
        return result + word.substr(0, end + 1);
    } else {
        result = word[end] + result;
        return recursion(word, result, d, ++start, --end);
    }
}

int main() {
    string word = "helloworld";
    int d = 2;
    string rot = recursion(word, "", d, 0, word.length() - 1);
    cout << rot;
    return 0;
}