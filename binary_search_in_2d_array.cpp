#include<iostream>
#include<vector>
using namespace std;

#define getArr(arr, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++) cin >> arr[i][j];}
#define printArr(arr, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++) {cout << arr[i][j] << " ";} cout << endl;}

pair<int, int> binarySearchIn2DMat(vector<vector<int>> arr, int row, int col, int key){
    int r, c;
    int s = 0, e = row*col, mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid/row][mid%col] == key){
            return {mid/row, mid%col};
        }
        else if(arr[mid/row][mid%col] < key){
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return {-1, -1};
}

int main(){

    //  Input
    // 3 3
    // 1 3 5
    // 6 7 8
    // 10 12 16

    int row, col;
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col, 0));
    getArr(arr, row, col);

    // printArr(arr, row, col);

    int key;
    cin >> key;

    pair<int, int> ans = binarySearchIn2DMat(arr, row, col, key);

    if(ans.first != ans.second && ans.first != -1)
        cout << "The element is present at " << ans.first << " row and " << ans.second << " col." << endl;
    else
        cout << "The element is not present in the given array." << endl;
    return 0;
}