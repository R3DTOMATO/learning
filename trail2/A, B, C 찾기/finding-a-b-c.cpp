#include <iostream>
#include <algorithm>
using namespace std;

int arr[7];
int n = 7;
int main() {
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    sort(arr, arr + n);
    int a = arr[0];
    int b = arr[1];
    int c = arr[n - 1] - a - b;
    
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}