#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int min_diff = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            int temp = a[0];
            for(int k = 0; k < n - 1; k++){
                a[k] = a[k + 1];
            }
            a[n - 1] = temp;
        }

        int diff = 0;
        for(int j = 0; j < n; j++){
            diff += (j - 0) * a[j];
        }

        if(min_diff > diff){
            min_diff = diff;
        }

        for(int j = 0; j < i; j++){
            int temp = a[n - 1];
            for(int k = n - 1; k >= 1; k--){
                a[k] = a[k - 1];
            }
            a[0] = temp;
        }
    }
    cout<<min_diff;
    return 0;
}