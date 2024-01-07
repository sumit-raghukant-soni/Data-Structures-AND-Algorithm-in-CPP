#include<iostream>
#include<math.h>
#include<unordered_map>
using namespace std;

bool checkHappyNumber(int n){
    unordered_map<int, int> mp;
    int tmp;
    while(tmp != 1){
        tmp = 0;
        if(mp.find(n) != mp.end()) return false;
        mp[n]++;
        while(n){
            tmp += pow(n%10, 2);
            n /= 10;
        }
        n = tmp;
        if(tmp == 1) return true;
    }
    return false;
}

int main(){

    int n;
    cin >> n;
    bool output = checkHappyNumber(n);

    if(output) cout << n << " is a happy number.";
    else cout << n << " is not a happy number.";

    return 0;
}