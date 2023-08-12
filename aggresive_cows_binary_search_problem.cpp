#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> arr, int size, int noOfCows, int mid){
    int stallCnt = 1, lastPos = arr[0];

    for(int i=0; i<size; i++){
        if( arr[i] - lastPos >= mid){
            stallCnt++;
            if(stallCnt == noOfCows){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggresiveCows(vector<int> arr, int size, int noOfCows){

    int s = 0;
    int maxi = INT_MIN, mini = INT_MAX;
    sort(arr.begin(), arr.end());
    for(int i=0; i<size; i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    int e = maxi - mini;
    int ans, mid = s + ((e - s)/2);
    while(s <= e){
        if(isPossible(arr, size, noOfCows, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ((e - s)/2);
    }
    return ans;
}

int main(){
    int size, noOfCows;
    cin >> size >> noOfCows;

    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int ans = aggresiveCows(arr, size, noOfCows);
    cout << endl << ans << endl;
    
    return 0;
}