#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt_2 = 0, cnt_3 = 0, cnt_12 = 0;
    cin>>n;
    for(int i = 0; i<=n;i++){
        if(i == 0){
            continue;
        }else if(i%12 ==0){
            cnt_12++;
        }else if(i%3==0){
            cnt_3++;
        }else if(i%2 == 0){
            cnt_2++;
        }
    }
    cout<<cnt_2<<" "<<cnt_3<<" "<<cnt_12;
    return 0;
}