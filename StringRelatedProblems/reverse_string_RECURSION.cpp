#include<iostream>
using namespace std;

string rev_rec(string str, int s){
    int e = str.length() - s - 1;
    if(s >= e)
        return str;
    
    swap(str[s], str[e]);
    return rev_rec(str, s+1);
}

int main(){
    string s;
    cin >> s;

    cout << "The reverse of the given string is " << rev_rec(s, 0) << endl;
    return 0;
}