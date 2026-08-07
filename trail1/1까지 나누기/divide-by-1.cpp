#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt = 0;
    int i = 1;
    while(n>1){
        n/=i;
        i++;
    }
    cout<<i-1;
    return 0;
}