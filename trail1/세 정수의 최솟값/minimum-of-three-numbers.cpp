#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a>=b?(b>=c?c:b):(a>=c?c:a));
    return 0;
}