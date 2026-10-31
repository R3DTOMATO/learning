#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> answer;

void Choose(int curr_num, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = curr_num; i <= N; i++) {
        answer.push_back(i);
        Choose(i + 1, cnt + 1);
        answer.pop_back();
    }
}

int main() {
    cin >> N >> M;

    Choose(1, 0);

    return 0;
}
