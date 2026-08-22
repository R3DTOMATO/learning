#include <iostream>
#include <climits>
using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Please write your code here.
    int prefixA = 0;
    int prefixB = 0;
    int answer = 0;
    for(int i = 0; i < n; i++){
        prefixA += A[i];
        prefixB += B[i];

        answer += prefixA - prefixB;
    }
    cout<<answer;
    return 0;
}