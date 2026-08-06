#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt = 0, sum = 0;
    cout<<fixed;
    cout.precision(1);
    for(int i = 0; i<10; i++){
        cin>>n;
        if(n<=200&&n>0){
            sum+=n;
            cnt++;
        }
    }
    cout<<sum<<" "<<(float)sum/cnt;
    return 0;
}