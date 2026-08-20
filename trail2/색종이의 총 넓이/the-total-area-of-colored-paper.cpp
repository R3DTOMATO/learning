#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    for(int i = 0; i < N; i++){
        x[i] += 100;
        y[i] += 100;
    }

    int extent[201][201] = {};

    for(int i = 0; i < N; i++){
        for(int j = x[i]; j < x[i] + 8; j++){
            for(int k = y[i]; k < y[i] + 8; k++){
                extent[j][k]++;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(extent[i][j] > 0){
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}