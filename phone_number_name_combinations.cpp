#include<iostream>
#include<unordered_map>
using namespace std;

void combinationsUtil(string inp, unordered_map<int, string> &mp, string output){
    if(inp == ""){
        cout << output << ", ";
        return;
    }
    int idx = inp[0] - '0';
    inp.erase(0,1);
    for(int i=0; i<mp[idx].length(); i++)
        combinationsUtil(inp, mp, output+mp[idx][i]);
}

void getAllCombinations(string &inp, unordered_map<int,string> &mp){
    combinationsUtil(inp, mp, "");
}

int main(){

    unordered_map<int, string> mp;
    mp[2] = "abc";
    mp[3] = "def";
    mp[4] = "ghi";
    mp[5] = "jkl";
    mp[6] = "mno";
    mp[7] = "pqrs";
    mp[8] = "tuv";
    mp[9] = "wxyz";
    /*
     1    2   3
     _   abc def
     4    5   6
    ghi  jkl mno
     7    8   9
    pqrs tuv wxyz
    */

    string input;
    cin >> input;

    getAllCombinations(input, mp);

    return 0;
}