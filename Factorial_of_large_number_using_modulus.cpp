#include<iostream>
#include<math.h>
using namespace std;

int Mod_fact(int num){
    int mod = pow(10, 9) + 7;
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = (1LL*(fact) * i) % mod;
    }
    return fact;
}

int main(){
    int num;
    cin >> num;

    cout << Mod_fact(num);
    return 0;
}