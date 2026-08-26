#include <iostream>
#include <algorithm>
using namespace std;

int x[4],y[4];

int main() {
    cin >> x[0] >> y[0] >> x[1] >> y[1];
    cin >> x[2] >> y[2] >> x[3] >> y[3];

    // Please write your code here.
    sort(x, x + 4);
    sort(y, y + 4);
    int length = max(abs(y[3] - y[0]), abs(x[3] - x[0]));
    cout<<length*length;
    return 0;
}