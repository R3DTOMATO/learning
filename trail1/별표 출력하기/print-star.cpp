#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt = 0;
    // n = 1 -> 1 n = 2 -> 3 n = 3 -> 5 -->2n-1
    for(int i = 0; i < 2*n - 1; i++){
        for(int j = 0; j <= cnt; j++){
            cout<<"* ";
        }
        cout<<endl;

        if(i < n-1){
            cnt++;
        }else{
            cnt--;
        }
        
    }
    return 0;
}