#include<iostream>
using namespace std;

char toLower(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A' + 'a';
    }
    else{
        return '\0';
    }
}

int main(){
    // string s = " s umit";
    // string s = " s %um#@#@#@it% %im%u% s";
    // string s = "2)3 4(3* 3^4 3#2";
    // string s = " ";
    // string s = " , ";
    string s = "a";
    // cin >> s;

    int strt = 0, end = s.length()-1;
    while(strt <= end){
        char temp1 = toLower(s[strt]);
        char temp2 = toLower(s[end]);
        if(temp1 == '\0'){
            strt++;
            continue;
        }
        if(temp2 == '\0'){
            end--;
            continue;
        }
        if(s[strt++] != s[end--]){
            cout << "Not a plaindrome string" << endl;
            return 0;
        }
    }
    cout << "A palindrome string"<< endl;
    return 0;
}