#include <iostream>

using namespace std;

int N;
int pigeon[100];
int position[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
    }

    // Please write your code here.
    int cnt = 0;

    for(int i = 1; i <= 10; i++){
        for(int j = 0; j < N; j++){
            if(pigeon[j] == i){//j = 0 -> 3
                for(int k = j + 1; k < N; k++){//k = 1
                    if(pigeon[j] == pigeon[k]){//pigeon[0] == pigeon[1]  -> 3
                        if(position[j] != position[k]){//position[0] != position[1] --> true
                            cnt++;
                        }
                        j = k;
                    }
                }
            }
        }
        
    }
    cout<<cnt;
    return 0;
}