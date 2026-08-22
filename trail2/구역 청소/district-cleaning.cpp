#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b;
    cin >> c >> d;

    // Please write your code here.
    int cnt = 0;
    if(a > d || b < c){
        for(int i = a; i < b; i++){
            cnt++;
        }
        for(int i = c; i < d; i++){
            cnt++;
        }
    }else{
        for(int i = (a>c?c:a); i < (b>d?b:d); i++){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}