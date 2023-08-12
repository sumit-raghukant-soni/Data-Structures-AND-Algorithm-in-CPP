#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);

    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }

    int s = 0, e = arr.size()-1;
    int mid = s + ((e - s) / 2);

    while(s < e){
        if(arr[mid] > arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + ((e - s) / 2);
    }

    cout << mid - 1 << endl;

    return 0;
}