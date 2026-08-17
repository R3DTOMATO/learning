#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.
    int elapsed = 0;
    while(true){
        if(a == c && b == d){
            break;
        }

        elapsed++;
        b++;

        if(b == 60){
            a++;
            b = 0;
        }
    }
    cout<<elapsed;
    return 0;
}