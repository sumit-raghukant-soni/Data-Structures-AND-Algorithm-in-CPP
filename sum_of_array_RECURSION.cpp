#include<iostream>
using namespace std;

int sumREC(int *arr, int size, int index){
    if(index == size-1)
        return arr[index];
    
    return arr[index] + sumREC(arr, size, index+1);
}

int main(){

    int size;
    cin >> size;

    int *arr = new int[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "The sum of given array using RECURSION is " << sumREC(arr, size, 0) << endl;
    return 0;
}