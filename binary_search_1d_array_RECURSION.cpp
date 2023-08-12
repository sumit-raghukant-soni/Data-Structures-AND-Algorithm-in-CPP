#include<iostream>
using namespace std;

bool BS_REC(int *arr, int key, int s, int e){
    if(s > e)
        return false;
    int mid = s + (e - s)/2;
    if(arr[mid] == key)
        return true;
    else if(arr[mid] < key)
        return BS_REC(arr, key, mid+1, e);
    else
        return BS_REC(arr, key, s, mid-1);
}

int main(){
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << "The element is present or not in given array " << BS_REC(arr, key, 0, size-1) << endl;
    return 0;
}