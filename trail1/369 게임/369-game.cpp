#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int i = 1;
    int count = 0;
    while (i <= n) {
        int tmp = i;
        if (i / 10 != 0) {
            while (tmp > 0) {
                if (tmp / 10 == 3 || tmp / 10 == 6 || tmp / 10 == 9) {
                    count = 1;
                    break;
                }
                else if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9 || i % 3 == 0) {
                    count = 1;
                    break;
                }
                else {
                    count = 0;
                }
                tmp /= 10;
            }
            if (count == 1) {
                cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
        else {
            if (i == 3 || i == 6 || i == 9 || i % 3 == 0) {
                cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
        i++;
    }
    return 0;
}