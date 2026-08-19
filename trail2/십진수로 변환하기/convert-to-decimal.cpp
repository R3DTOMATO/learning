#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int binary;
    cin>>binary;
    int num = 0;


    for(int i = 0; i < 8; i++){
        int temp = 0;
        temp = binary % 10;
        binary/=10;

        int square = 1;
        for(int j = 0; j < i; j++){
            square *= 2;
        }
        num = num + square * temp;
    }
    
    
    cout<<num;
    return 0;
}