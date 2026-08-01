#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    if(5>=a&&a>=3){
        cout<<"Spring";
    }else if(8>=a&&a>=6){
        cout<<"Summer";
    }else if(11>=a&&a>=9){
        cout<<"Fall";
    }else if(a==12||(2>=a&&a>=1)){
        cout<<"Winter";
    }
    return 0;
}