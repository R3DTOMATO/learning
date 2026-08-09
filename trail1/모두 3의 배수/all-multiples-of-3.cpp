#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    bool satisfied = true;
    for(int i = 0; i<5;i++){
        int n;
        cin>>n;
        if(n%3 != 0){
            satisfied = false;
            break;
        }
    }
    if(satisfied == true){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}