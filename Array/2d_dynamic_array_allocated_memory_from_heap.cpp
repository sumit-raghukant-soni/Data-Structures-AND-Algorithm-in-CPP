#include<iostream>
using namespace std;

int main(){

    int row, col;
    cin >> row >> col;
    // The double pointer is allocated with the pointer to the multiple row heads
    int **arr = new int*[row];
    // The memory of columns number is allocated to each pointer
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The output" << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }
    
    return 0;
}