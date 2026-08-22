#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int min_cnt = INT_MAX;
    int sum = 0;
    for(int i = 0; i < N; i++){
        int temp1, temp2 = 0;
        for(int j = i + 1; j < N; j++){
            temp1 = arr[i];
            temp2 = arr[j];
            sum = 0;
            arr[i] = 0;
            arr[j] = 0;
            for(int k = 0; k < N; k++){
                sum += arr[k];
            }
            arr[i] = temp1;
            arr[j] = temp2;
            if(min_cnt > abs(sum - S)){
                min_cnt = abs(sum - S);
            }
        }
    }
    cout<<min_cnt;
    return 0;
}