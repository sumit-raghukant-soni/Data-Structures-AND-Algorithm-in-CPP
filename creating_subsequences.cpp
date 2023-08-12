#include<iostream>
#include<vector>
#include<map>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    } cout << endl;
}

void solve(vector<int> arr, int idx, vector<int> tmp){
    if(idx == arr.size()){
        cout << "For " << idx << endl;
        printArray(tmp);
        return;
    }
    
    cout << "For " << idx << endl;
    printArray(tmp);
    for(int i=idx; i<arr.size(); i++){
        tmp.push_back(arr[i]);
        solve(arr, i+1, tmp);
        tmp.pop_back();
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> tmp;
    solve(arr, 0, tmp);
    map<char, int> mp;
    mp['\0'] = 1;
    cout << mp['\0'];
    return 0;
}