#include<iostream>
using namespace std;

int sqrt(int n){
    int s = 1, e = n, ans = -1;
    int mid = s + ((e - s)/2);
    while(s <= e){
        long long temp = mid * mid;
        if(temp == n)
            return mid;
        if(temp > n){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + ((e - s)/2);
    }
    return ans;
}

double morePrecision(int n, int tempInt, int precisions){
    double ans = tempInt, factorial = 1;
    for(int i=0; i<precisions; i++){
        factorial /= 10;
        for(double j=ans; j*j<=n; j += factorial){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int tempInt = sqrt(n);
    cout << tempInt << endl;
    double ans = morePrecision(n, tempInt, 5);
    double no;
    cin >> no;
    cout << no;
    return 0;
}