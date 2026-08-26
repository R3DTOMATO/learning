#include <iostream>
#include <algorithm>
using namespace std;

int arr[15];

int main() {
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    sort(arr, arr + 15);
    cout<< arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[14] - arr[0] - arr[1] - arr[2];
    return 0;
}