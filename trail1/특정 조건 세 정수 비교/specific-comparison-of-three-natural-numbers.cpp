#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    int temp;
    cin>>a>>b>>c;
    temp = (a>=b?(b>=c?c:b):(a>=c?c:a));
    cout<<(a==temp)<<" "<<(a==b&&b==c);
    return 0;
}