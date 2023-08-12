#include<iostream>
#include<vector>
using namespace std;

int getCount(int n){
    int cnt = 0;
    while(n){
        if(n & 1){
            cnt++;
        }
        n = n >> 1;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    vector<int> ans;
    ans.push_back(0);

    for(int i=1; i<=n; i++){
        ans.push_back(getCount(i));
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    } cout << endl;

    return 0;
}