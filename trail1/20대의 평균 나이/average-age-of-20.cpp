#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    int cnt = 0;
    while(true){
        cin>>n;
        if(n>29||n<20){
            break;
        }
        sum+=n;
        cnt++;
    }
    cout<<fixed;
    cout.precision(2);
    cout<<(float)sum/cnt;
    return 0;
}