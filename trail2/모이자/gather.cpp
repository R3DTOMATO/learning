#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    
    int min_sum = INT_MAX;
    for(int i = 0; i < n; i++){

        int distance_diff = 0;

        for(int j = 0; j < n; j++){
           distance_diff += A[j] * abs(i - j);
        }
        min_sum = min(min_sum, distance_diff);
    }

    cout<<min_sum;
    return 0;
}