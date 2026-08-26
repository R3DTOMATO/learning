#include <iostream>
#include <climits>
using namespace std;

int arr[7];

int main() {
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int max = 0;
    int a = INT_MAX, b = INT_MAX,c = 0;
    for(int i = 0; i < 7; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int a_cnt = 0;
    for(int i = 0; i < 7; i++){
        if(a > arr[i]){
            a = arr[i];
            a_cnt = i;
        }
    }

    for(int i = 0; i < 7; i++){
        if(b > arr[i] && a_cnt != i){
            b = arr[i];
        }
    }

    c = max - a - b;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}