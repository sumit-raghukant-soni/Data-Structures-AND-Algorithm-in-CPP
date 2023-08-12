#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> rotateArray(vector<vector<int>> arr){
    vector<vector<int>> ans(arr.size(), vector<int>(arr[0].size(), 0));

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            ans[j][i] = arr[i][j];
        }
    }
    return ans;
}

int main(){

    int row, col;
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col, 0));

    // INPUT 
    // 3 3
    // 1 2 3
    // 4 5 6
    // 7 8 9
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> rotatedArray = rotateArray(arr);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << rotatedArray[i][j] << " ";
        } cout << endl;
    }
    return 0;
}