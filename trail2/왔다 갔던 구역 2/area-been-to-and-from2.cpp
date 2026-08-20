#include <iostream>
using namespace std;

int n;

int x[100];
char dir[100];

int cnt[200001];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    const int OFFSET = 100000;
    int location = OFFSET;

    for (int i = 0; i < n; i++) {

        if (dir[i] == 'R') {
            for (int j = 0; j < x[i]; j++) {
                cnt[location]++;
                location++;
            }
        }

        else if (dir[i] == 'L') {
            for (int j = 0; j < x[i]; j++) {
                location--;
                cnt[location]++;
            }
        }
    }

    int area_cnt = 0;

    for (int i = 0; i < 200001; i++) {
        if (cnt[i] >= 2) {
            area_cnt++;
        }
    }

    cout << area_cnt;

    return 0;
}