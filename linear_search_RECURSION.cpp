#include<iostream>
using namespace std;

bool LS_REC(int *arr, int size, int key, int index){
    if(index == size-1)
        return arr[index] == key;

    if(arr[index] == key)
        return true;
    return LS_REC(arr, size, key, index+1);
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

    cout << "The key is present or not is : " << LS_REC(arr, size, key, 0) << endl;
    return 0;
}