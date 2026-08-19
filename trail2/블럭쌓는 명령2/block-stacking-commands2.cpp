#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    int blocks[N] ={};
    for(int i = 0; i < K; i++){
        for(int j = A[i]; j <= B[i]; j++){
            blocks[j]++;
        }
    }

    int maximum = 0;
    for(int i = 0; i < N; i++){
        if(blocks[i] > maximum){
            maximum = blocks[i];
        }
    }
    cout<<maximum;
    return 0;
}