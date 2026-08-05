#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        if(i/10 != 0){
            if(i/10 == 3 || i/10 == 6||i/10 == 9){
                cout<<0<<" ";
            }else{
                int tmp = i%10;
                if(tmp == 3 || tmp == 6 || tmp == 9 || i%3==0){
                    cout<<0<<" ";
                }else{
                    cout<<i<<" ";
                }
            }
            
        }else{
            if(i == 3 || i == 6 || i == 9 || i%3==0){
                cout<<0<<" ";
            }else{
                cout<<i<<" ";
            }
        }
        
        i++;
    }
    return 0;
}