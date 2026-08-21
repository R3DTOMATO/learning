#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int cnt = 0;
    for(int i = 0; i < A.size(); i++){
        for(int j = i + 2; j < A.size(); j++){
           if(A[i] ==  '(' && A[i + 1] == '(' && A[j] == ')' && A[j+1] == ')'){
            cnt++;
           } 
        }
    }
    cout<<cnt;
    return 0;
}