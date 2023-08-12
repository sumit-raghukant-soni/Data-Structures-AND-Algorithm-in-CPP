#include<iostream>
#include<vector>
using namespace std;

void spiralPrint(vector<vector<int>> arr){
    int row = arr.size(), col = arr[0].size();
    int rowS = 0, colS = 0, rowE = arr.size()-1, colE = arr[0].size()-1;
    int totalElements = row*col;

    while(totalElements){
        // For l -> R on top row
        for(int i = colS; i <= colE; i++){
            cout << arr[rowS][i] << " ";
            totalElements--;
        }
        rowS++;
        // For t -> d last Col
        for(int i = rowS; i <= rowE; i++){
            cout << arr[i][colE] << " ";
            totalElements--;
        }
        colE--;
        // For R -> L on last row
        for(int i = colE; i >= colS; i--){
            cout << arr[rowE][i] << " ";
            totalElements--;
        }
        rowE--;
        // For d -> T on the first Col
        for(int i = rowE; i >= rowS; i--){
            cout << arr[i][colS] << " ";
            totalElements--;
        }
        colS++;
    }
    
}

int main(){
    // input
    // 5 5
    // 1 2 3 4 5
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 21 22 23 24 25

    // input
    // 5 5
    // 1 2 3 4 5
    // 16 17 18 19 6
    // 15 24 25 20 7
    // 14 23 22 21 8
    // 13 12 11 10 9

    int row, col;
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col, 0));
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    spiralPrint(arr);
    return 0;
}