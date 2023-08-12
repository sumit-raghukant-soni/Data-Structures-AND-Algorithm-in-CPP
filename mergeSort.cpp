#include<iostream>
using namespace std;

void merge(int *arr, int s, int mid, int e){
    // cout << s << mid << e << endl;
    int i=s, j=mid+1;
    int *temp = new int[e-s+1], k=0;
    while(i<=mid && j <= e){
        if(arr[j] < arr[i]){
            temp[k++] = arr[j++];
        }
        else{
            temp[k++] = arr[i++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=e){
        temp[k++] = arr[j++];
    }
    k=0;
    // cout << "After sorting" << endl;
    for(int i=s; i<=e; i++){
        arr[i] = temp[k++];
        // cout << arr[i] << " ";
    } // cout << endl;
}

void mergeSort(int *arr, int s, int e){
    // cout << s << e << endl;
    if(s >= e)
        return;
    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, mid, e);
}

int main(){

    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, size-1);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}