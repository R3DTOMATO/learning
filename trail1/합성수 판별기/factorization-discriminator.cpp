#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    bool satisfied = false;
    for(int i = 2; i<=(n-1); i++){
        if(n % i == 0){
            satisfied = true;
            break;
        }
    }
    if(satisfied == true){
        cout<<"C";
    }else{
        cout<<"N";
    }
    return 0;
}