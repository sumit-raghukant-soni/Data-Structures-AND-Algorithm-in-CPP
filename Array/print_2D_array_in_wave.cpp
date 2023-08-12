#include<iostream>
using namespace std;

void printWave(int row, int col, int arr[][4]){

    int j = 0;
    for(int i=0; i<col; i++){
        while(j >= 0 && j < row){
            cout << arr[j][i] << " ";
            if((i & 1) == 0)
                j++;
            else
                j--;
        } cout << endl;
        if((i & 1) == 0)
            j--;
        else
            j++;
    }
}

int main(){
    cout << (0 & 1) << endl;
    int row, col;
    cin >> row >> col;

    int arr[row][4];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    // Print input 2D array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    printWave(row, col, arr);

    return 0;
}