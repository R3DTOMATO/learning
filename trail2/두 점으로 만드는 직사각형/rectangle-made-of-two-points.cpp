#include <iostream>
#include <algorithm>
using namespace std;

int x1, y1, x2, y2;
int a1, b1, a2, b2;
int x[4];
int y[4];
int main() {
    cin >> x[0] >> y[0] >> x[1] >> y[1];
    cin >> x[2] >> y[2] >> x[3] >> y[3];

    // Please write your code here.
    sort(x, x + 4);
    sort(y, y + 4);

    int extent = abs(x[3] - x[0]) * abs(y[3] - y[0]);
    cout<<extent;
    return 0;
}