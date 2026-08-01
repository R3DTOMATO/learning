#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int s,a;
    cin>>s>>a;
    if(a>=19){
        if(s==0){
            cout<<"MAN";
        }else if(s==1){
            cout<<"WOMAN";
        }
    }else{
        if(s==0){
            cout<<"BOY";
        }else if(s==1){
            cout<<"GIRL";
        }
    }
    return 0;
}