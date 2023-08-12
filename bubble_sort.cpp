#include<iostream>
using namespace std;

void printA(int *arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

void sortTheMax(int *arr, int size, int idx){
    if(idx == size)
        return;
    if(arr[idx] > arr[idx+1])
        swap(arr[idx], arr[idx+1]);
    sortTheMax(arr, size, idx+1);
}

void bubble_rec(int *arr, int size, int idx){
    // Base condition
    if(idx == size-1)
        return;
    
    // processing
    sortTheMax(arr, size-idx-1, 0);
    // printA(arr, size);

    // Recursive call
    bubble_rec(arr, size, idx+1);
}

int main(){
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    bubble_rec(arr, size, 0);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}