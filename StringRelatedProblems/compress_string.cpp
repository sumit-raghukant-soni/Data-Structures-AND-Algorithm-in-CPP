#include<iostream>
using namespace std;

string compressString(string s){
    int ansIdx=0;
    int i = 0;
    while(i < s.length()){
        int j = i+1;
        while(s[j] == s[i] && j < s.length())
            {j++;}
        int count = j - i;
        if(count > 1){
            s[ansIdx++] = s[i];
            string cnt = to_string(count);
            cout << cnt << endl;
            for(char ch : cnt){
                s[ansIdx++] = ch;
            }
        }
        else{
            s[ansIdx++] = s[i];
        }
        i = j;
    }
    return s.substr(0,ansIdx);
}

int main(){
    string s;
    cin >> s;

    cout << compressString(s) << endl;
    return 0;
}