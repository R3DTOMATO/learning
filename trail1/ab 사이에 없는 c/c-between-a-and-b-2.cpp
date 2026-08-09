#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    bool satisfied = true;
    for(int i =a; i<=b; i++){
        if(i%c==0){
            satisfied = false;
            break;
        }
    }
    if(satisfied == true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}