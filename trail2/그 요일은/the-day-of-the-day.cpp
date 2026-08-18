#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1,d1,m2,d2;
    string A;
    cin>>m1>>d1>>m2>>d2;
    cin>>A;

    int month_day[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

    int elapsed = 0;
    int cnt = 0;
    string today[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    while(true){
        if(m1 == m2 && d1 == d2){
            break;
        }
        d1++;
        elapsed++;
        if(elapsed > 6){
            elapsed = 0;
        }
        if(A == today[elapsed]){
            cnt++;
        }
        if(d1 > month_day[m1]){
            d1 = 1;
            m1++;
        }
    }
    if(A == "Mon"){
        cout<<cnt+1;
    }else{
        cout<<cnt;
    }
    
    return 0;
}