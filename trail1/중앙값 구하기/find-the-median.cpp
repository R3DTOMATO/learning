#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b&&b>c)||(c>b&&b>a)){
        cout<<b;
    }else if((b>a&&a>c)||(c>a&&a>b)){
        cout<<a;
    }else{
        cout<<c;
    }
    return 0;
}