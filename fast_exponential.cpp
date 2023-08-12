#include<iostream>
using namespace std;

int fastExpo(int num, int k){
    if(k == 1){
        return num;
    }
    if(k & 1){
        return fastExpo(num, k>>1) * fastExpo(num, k>>1) * num;
    }
    else{
        return fastExpo(num, k>>1) * fastExpo(num, k>>1);
    }
}

int main(){
    int num, k;
    cin >> num >> k;

    cout << fastExpo(num, k) << endl;

    return 0;
}