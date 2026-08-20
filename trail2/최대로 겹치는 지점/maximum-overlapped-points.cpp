#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    int cnt[100] = {};
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j <= x2[i]; j++){
            cnt[j]++;
        }
    }
    
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j < x2[i]; j++){
            if(cnt[j] > max){
                max = cnt[j];
            }
        }
    }

    cout<<max;

    return 0;
}