#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int start, int end, int key){
    int mid = start + ((end - start) / 2);
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;        
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int getPivot(vector<int>& arr, int size){
    int s = 0;
    int e = size-1;
    int mid = s + ((e-s)/2);
    while(s < e){
        if(arr[mid] > arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + ((e-s)/2);
    }
    return mid;
}

int main(){

    int size, key;
    cin >> size >> key;
    vector<int> arr(size);
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }

    int pivot = getPivot(arr, size);
    if(key >= arr[0] && key <= arr[pivot-1]){
        cout << search(arr, 0, pivot, key);
    }
    else{
        cout << search(arr, pivot, size-1, key);
    }
    
    return 0;
}