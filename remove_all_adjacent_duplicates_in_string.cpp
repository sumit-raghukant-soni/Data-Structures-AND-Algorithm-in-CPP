#include<iostream>
using namespace std;

string validate(string s){
    int i=0;
    while(i < s.length()){
        if(i+1 < s.length() && s[i] != s[i+1])
            i++;
        else{
            s.erase(i,2);
            i=0;
        }
        if(i+1 == s.length())
            break;
    }
    return s;
}

int main(){
    // The string is might having duplicate adjacent chars and we need to remove them
    string s;
    cin >> s;

    cout << validate(s) << endl;

    return 0;
}