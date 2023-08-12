#include<iostream>
using namespace std;

string replaceString(string s, string replacement){
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            s.erase(i, 1);
            s.insert(i, replacement);
        }
    }
    return s;
}

int main(){
    
    // string s;
    char s[100];
    cin.getline(s, 100);
    // string replacement = "@40";
    char replacement[100];
    cin.getline(replacement, 100);
    cout << replaceString(s, replacement) << endl;
    return 0;
}