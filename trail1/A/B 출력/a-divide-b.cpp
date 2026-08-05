#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    cout<<a/b<<"."<<(a%b)*10/b;
    int res = a*10%b;
    for(int i =0; i<19;i++){
        int m = (res*10)/b;
        cout<<m; 
        res = (res*10)%b;
    }
    return 0;
}