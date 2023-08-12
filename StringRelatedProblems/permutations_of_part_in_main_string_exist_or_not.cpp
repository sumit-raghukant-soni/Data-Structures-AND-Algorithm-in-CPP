#include<iostream>
using namespace std;

bool isValid(int count1[], int count2[]){
    for(int i=0; i<26; i++){
        // cout << count1[i] << " " << count2[i] << endl;
        if(count1[i] != count2[i])
            return false;
    }
    return true;
}

bool isPresent(string s, string part){

    int count1[26] = {0}, count2[26] = {0};

    for(int i=0; i<part.length(); i++){
        count1[s[i] - 'a']++;
        count2[part[i] - 'a']++;
    }

    if(isValid(count1, count2)){
        return true;
    }

    // Process rest of the windows
    for(int i=i+part.length(); i<s.length(); i++){
        int oldChar = s[i - part.length()] - 'a';
        count1[oldChar]--;
        int newChar = s[i] - 'a';
        count1[newChar]++;
        // cout << char(oldChar + 'a') << " " << char(newChar + 'a') << endl;
        if(isValid(count1, count2)){
            return true;
        }   
    }
    return false;
}

int main(){
    // Only lowercase letters in the strings are considered
    string s;
    cin >> s;
    string part;
    cin >> part;

    cout << isPresent(s, part) << endl;

    return 0;
}