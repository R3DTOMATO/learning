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
    int cnt = 0;
    string result = "Yes";
    for(int i = 1; i < n - 1; i ++){
        if(x1[i - 1] > x2[i] || x1[i] > x2[i - 1]){
            
            for(int j = i - 1; j < n - 1; j++){
                
                x1[j] = x1[j + 1];
                x2[j] = x2[j + 1];
            }
            break;
        }
        if(x1[i] > x2[i + 1] || x1[i + 1] > x2[i]){ 
            for(int j = i + 1; j < n - 1; j++){
                x1[j] = x1[j + 1];
                x2[j] = x2[j + 1];
            }
            break;
        }
    }

    for(int i = 0; i < n - 2; i++){
        if(x1[i] > x2[i + 1] || x1[i + 1] > x2[i]){
            result = "No";
        }
    }

    cout<<result;
    return 0;
}