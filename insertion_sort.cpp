#include<iostream>
using namespace std;

void printA(int *arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

void insertion_sort(int *arr, int size){
    
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j >= 0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            else
                break;
        }
        arr[j+1] = temp;
        // printA(arr, size);
    }
}

int main(){
    int size;
    cin >> size;

    int*arr = new int[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    insertion_sort(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}