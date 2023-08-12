#include<iostream>
using namespace std;

int* rotateArray(int *arr, int size, int diff){
    int *ans = new int[size];

    for(int i=0; i<size; i++){
        ans[i] = arr[(i+diff)%size];
    }
    return ans;
}

int main(){
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int diff;
    cin >> diff;

    int *rotated = rotateArray(arr, size, diff);

    for(int i=0; i<size; i++){
        cout << rotated[i] << " ";
    }
    return 0;
}