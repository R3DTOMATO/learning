#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int month_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int elapsed = 1;
    int count_day = d1;
    int count_month = m1;
    while(true){
        if(m1 == m2 && d1 == d2){
            break;
        }
        if(count_month == m2 && count_day == d2){
            break;
        }
        elapsed++;
        count_day++;
        if(count_day > month_days[count_month]){
            count_month++;
            count_day = 1;
        }

        

    }
    cout<<elapsed;
    return 0;
}