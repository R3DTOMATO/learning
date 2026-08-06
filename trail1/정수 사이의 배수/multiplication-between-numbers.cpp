#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int sum =0;
    int cnt =0;
    cout<<fixed;
    cout.precision(1);
    for(int i =a; i<=b;i++){
        if(i%5==0||i%7==0){
            sum+=i;
            cnt++;
        }
    }
    cout<<sum<<" "<<(float)sum/cnt;
    return 0;
}