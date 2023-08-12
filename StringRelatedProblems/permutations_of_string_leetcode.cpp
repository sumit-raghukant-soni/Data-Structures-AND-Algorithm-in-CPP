#include<iostream>
using namespace std;

void printAllPerm(string str, int idx){

    if(idx == str.length()-1){
        cout << str << ", ";
        return;
    }

    for(int i=idx; i<str.length(); i++){
        swap(str[i], str[idx]);
        printAllPerm(str, idx+1);
        swap(str[i], str[idx]);
    }

}

int main(){

    string str;
    cin >> str;

    printAllPerm(str, 0);

    return 0;
}