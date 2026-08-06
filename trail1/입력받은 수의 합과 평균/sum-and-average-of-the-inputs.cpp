#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int input,sum=0,cnt=0;
    cout<<fixed;
    cout.precision(1);
    for(int i = 0; i< n; i++){
        cin>>input;
        sum+=input;
        cnt++;
    }
    cout<<sum<<" "<<(float)sum/cnt;
    return 0;
}