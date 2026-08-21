#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int min_dist = INT_MAX;
    for(int i = 1; i < n - 1 ; i++){

        int prev = 0;
        int distance = 0;

        for(int j = 1; j < n; j++){
            if(j == i){
                continue;
            }
            distance += abs(x[prev] - x[j]) + abs(y[prev] - y[j]);
            prev = j;
        }
        if(min_dist > distance){
            min_dist = distance;
        }
    }
    cout<<min_dist;
    return 0;
}