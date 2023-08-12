#include<iostream>
using namespace std;

char getMaxOccCh(string s){

    int alpha[26] = {0};
    int ansIdx;

    for(int i=0; i<s.length(); i++){
        int idx;
        if(s[i] >= 'a' && s[i] <= 'z')
            idx = s[i] - 'a';
        if(s[i] >= 'A' && s[i] <= 'Z')
            idx = s[i] - 'A';
        alpha[idx]++;
        if(alpha[idx] > alpha[ansIdx] || (alpha[ansIdx] == alpha[idx] && idx < ansIdx)){
            ansIdx = idx;
        }
    }

    return ansIdx + 'a';
}

int main(){
    // String must have only alphabets in capital or lower case
    string s;
    cin >> s;

    cout << getMaxOccCh(s) << endl;

    return 0;
}