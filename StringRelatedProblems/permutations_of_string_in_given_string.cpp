#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isMatch(vector<int> arr, vector<int> arr2){
        for(int i=0; i<26; i++){
            if(arr[i] != arr2[i]){
                return false;
            }
        } cout << endl;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;
        vector<int> alpha(26, 0), beta(26, 0);
        for(int i=0; i<s1.length(); i++){
            alpha[s1[i] - 'a']++;
        }
        for(int i=0; i<s1.length(); i++){
            beta[s2[i] - 'a']++;
        }
        if(isMatch(alpha, beta))
            return true;
        for(int i = s1.length(); i<s2.length(); i++){
            beta[s2[i-(s1.length())] - 'a']--;
            beta[s2[i] - 'a']++;
            if(isMatch(alpha, beta))
                return true;
        }
        return false;
    }
};