#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    string N;
    cin>>A>>B;
    cin>>N;
    
    int num = 0;
    for(int i = 0; i < N.length(); i++){
        num = num * A + (N[i] - '0');
    }

    int digits[20] = {};
    int cnt = 0;
    while(true){
        if(num < B){
            digits[cnt++] = num;
            break;
        }

        digits[cnt++] = num % B;
        num /= B;
    }

   for(int i = cnt - 1; i >= 0; i--){
        cout<<digits[i];
   }
    

    return 0;
}