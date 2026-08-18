#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin>>m1>>d1>>m2>>d2;
    int month_day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int elapsed = 0;
    
    if(m1>m2||(m1 == m2 && d1 > d2)){
        while(true){
            if(m1 == m2 && d1 == d2){
                break;
            }
            d2++;
            elapsed--;
            if(elapsed < 0){
                elapsed = 6;
            }
            if(d2 > month_day[m2]){
                d2 = 1;
                m2++;
            }
        }
    }else if(m1 < m2 ||(m1 == m2 && d1<d2)){
        while(true){
            if(m1 == m2 && d1 == d2){
                break;
            }
            d1++;
            elapsed++;
            if(elapsed > 6){
                elapsed = 0;
            }
            if(d1 > month_day[m1]){
                d1 = 1;
                m1++;
            }
        }
    }else{
        
    }
    cout<<week[elapsed];
    return 0;
}