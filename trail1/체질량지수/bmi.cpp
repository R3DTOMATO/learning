#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h,w,b;
    cin>>h>>w;
    b=(w*10000)/(h*h);
    cout<<b<<endl;

    if(b>25){
        cout<<"Obesity"<<endl;
    }
    return 0;
}