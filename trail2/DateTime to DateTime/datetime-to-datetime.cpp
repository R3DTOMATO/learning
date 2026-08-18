#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    int elapsed = 0;
    int day = 11,  hour = 11, minute = 11;
    if((a<11) || (a==11 &&  b <11)||(a == 11 && b == 11 && c < 11)){
       elapsed = -1;
    }else{
        while(true){
            if(day == a && hour == b && minute == c){
                break;
            }
            minute++;
            elapsed++;
            if(minute == 60){
                minute = 0;
                hour++;
            }
            if(hour == 24){
                hour = 0;
                day++;
            }
        }
    }
    cout<<elapsed;
    
    return 0;
}