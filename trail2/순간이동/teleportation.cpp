#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int a, b, x, y;

int main() {
    cin >> a >> b >> x >> y;

    // Please write your code here.

    int direct = abs(a - b);
    int teleport1 = abs(a - x) + abs(b - y);
    int teleport2 = abs(a - y) + abs(b - x);
    
    int result = min({direct, teleport1, teleport2});
    cout<<result;
    return 0;
}