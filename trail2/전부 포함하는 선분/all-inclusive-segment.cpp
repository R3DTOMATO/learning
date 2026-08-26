#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int x1[100], x2[100];

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int answer = INT_MAX;

    for (int remove = 0; remove < n; remove++) {

        int min_x = INT_MAX;
        int max_x = INT_MIN;

        for (int i = 0; i < n; i++) {

            if (i == remove)
                continue;

            min_x = min(min_x, x1[i]);
            max_x = max(max_x, x2[i]);
        }

        answer = min(answer, max_x - min_x);
    }

    cout << answer;

    return 0;
}