#include<iostream>
using namespace std;

int fibonacci(int no){
    if(no <= 0)
        return 0;
    if(no == 1)
        return 1;
    
    return fibonacci(no-1) + fibonacci(no-2);
}

int main(){

    int no;
    cin >> no;

    cout << "Fibanoacci of " << no << " is " << fibonacci(no) << endl;
    return 0;
}