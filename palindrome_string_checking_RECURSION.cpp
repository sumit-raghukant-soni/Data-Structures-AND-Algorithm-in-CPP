#include<iostream>
using namespace std;

bool palindrome_REC(string str, int s){
    int e = (str.length()-1) - s;
    if(s > str.length()/2)
        return true;
    if(str[s] != str[e]){
        return false;
    }
    return palindrome_REC(str, s+1);
}

int main(){
    string str;
    cin >> str;

    cout << "The string is palindrome or not: " << palindrome_REC(str, 0) << endl;   
    return 0;
}