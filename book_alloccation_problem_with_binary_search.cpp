#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int totalStudents, int mid){
    int studentCount = 1;
    int totalPages = 0;
    for(int i=0; i<size; i++){
        if(arr[i] + totalPages <= mid){
            totalPages += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > totalStudents || arr[i] > mid){
                return false;
            }
            totalPages = arr[i];
        }
    }
    return true;
}

int bookAllocation(int arr[], int size, int totalStudents){
    int s = 0;
    int e = 0;
    for(int i = 0; i<size; i++){
        e += arr[i];
    }
    int ans = 0;
    int mid = s + ((e - s)/2);
    while(s <= e){
        if(isPossible(arr, size, totalStudents, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + ((e-s)/2);
    }   
    return ans;
}

int main()
{
    int size;
    cin >> size;
    int total_students;
    cin >> total_students;
    
    int *arr = new int[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int ans = bookAllocation(arr, size, total_students);

    cout << ans;

    return 0;
}