#include<iostream>
using namespace std;

string makeSmallestPalindrome(string s) {
    int st=0, e=s.length()-1;

    while(st < e){
        if(s[st] < s[e]){
            s[e] = s[st];
        }
        else if(s[st] > s[e]){
            s[st] = s[e];
        }
        st++;
        e--;
    }
    return s;
}

int main(){
    string str = "egcfe";
    cout << makeSmallestPalindrome(str) << endl;

    str = "abcd";
    cout << makeSmallestPalindrome(str) << endl;
    
    str = "seven";
    cout << makeSmallestPalindrome(str) << endl;
    return 0;
}