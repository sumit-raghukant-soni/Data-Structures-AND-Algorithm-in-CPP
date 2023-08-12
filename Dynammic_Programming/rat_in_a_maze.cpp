#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> arr, vector<vector<int>> isVisited){
    if(x >= 0 && x < arr.size() && y >= 0 && y < arr.size() && isVisited[x][y] == 0 && arr[x][y] == 1)
        return true;
    return false;
}
void solve(int x, int y, vector<vector<int>> &arr, vector<string> &ans, string path, vector<vector<int>> isVisited){
    if(x == arr.size()-1 && y == arr.size()-1){
        ans.push_back(path);
        return;
    }
    // cout << "for " << x << " " << y << endl;
    isVisited[x][y] = 1;
    
    // D 
    int newX = x+1;
    int newY = y;
    if(isSafe(newX, newY, arr, isVisited)){
        path+= "D";
        solve(newX, newY, arr, ans, path, isVisited);
        path.pop_back();
    }
    // L
    newX = x;
    newY = y-1;
    if(isSafe(newX, newY, arr, isVisited)){
        path+= "L";
        solve(newX, newY, arr, ans, path, isVisited);
        path.pop_back();
    }
    // R
    newX = x;
    newY = y+1;
    if(isSafe(newX, newY, arr, isVisited)){
        path+= "R";
        solve(newX, newY, arr, ans, path, isVisited);
        path.pop_back();
    }
    // U
    newX = x-1;
    newY = y;
    if(isSafe(newX, newY, arr, isVisited)){
        path+= "U";
        solve(newX, newY, arr, ans, path, isVisited);
        path.pop_back();
    }
    isVisited[x][y] = false;
}

int main(){
    int size;
    cin >> size;

    vector<vector<int>> arr(size, vector<int>(size));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin >> arr[i][j];
        }
    }
    vector<string> ans;
    vector<vector<int>> isVisited(size, vector<int>(size));
    solve(0,0, arr, ans, "", isVisited);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}