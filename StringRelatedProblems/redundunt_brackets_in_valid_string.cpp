#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<char> s;

    // string str = "((a+b))";
    // string str = "((a+b) * c)";
    string str = "((a+b) * c * (d / (c)))";

    for(int i=0; i<str.length(); i++){
        char ch = str[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            s.push(ch);
        }
        else{
            if(ch == ')'){
                bool redundunt = true;
                while(s.top() != '('){
                    redundunt = false;
                    s.pop();
                }
                s.pop();
                if(redundunt){
                    cout << " Redundunt " << endl;
                    return true;
                }
            }
        }
    }

    cout << " Not redundunt " << endl;
    return 0;
}