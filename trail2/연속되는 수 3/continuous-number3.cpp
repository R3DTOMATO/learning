#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    char sign[N] = {};

    for(int i = 0; i < N; i++){
        if(arr[i] < 0){
            sign[i] = 'M';
        }else if(arr[i] > 0){
            sign[i] = 'P';
        }
    }

    int cnt = 1;
    int result = 1;

    for (int i = 1; i < N; i++) {
        if (sign[i] == sign[i - 1]) {
            cnt++;
        }else {
            cnt = 1;
        }

        if (result < cnt) {
            result = cnt;
        }
    }

    cout<<result;
    return 0;
}