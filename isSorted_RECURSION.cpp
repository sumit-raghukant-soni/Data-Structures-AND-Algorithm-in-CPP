#include<iostream>
using namespace std;

bool isSorted(int *arr, int size, int index){
    if(index == size-1){
        return (arr[index] > arr[index-1]);
    }

    if(arr[index] > arr[index-1])
        return isSorted(arr, size, index+1);
    else
        return false;
}

int main(){

    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "The array is sorted or not: ";
    cout << isSorted(arr, size, 1) << endl;
    return 0;
}