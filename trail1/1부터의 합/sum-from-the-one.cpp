#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int sum = 0;
    int i;
    for(i = 1; i<=100;i++){
        if(sum>=n){
            break;
        }
        sum+=i;
    }
    cout<<i-1;
    return 0;
}