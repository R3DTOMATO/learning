#include <iostream>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    char temp = '0';
    int max_decimal = 0;
    int decimal = 0;
    for(int i = 0; i < a.size(); i++){
        a[i] = '0' + '1' - a[i];

        decimal = 0;
        for(int j = 0; j < a.size(); j++){
            decimal = decimal * 2 + (a[j] - '0');
        }
        if(max_decimal < decimal){
            max_decimal = decimal;
        }
        a[i] = '0' + '1' - a[i];
    }

    cout<<max_decimal;
    return 0;
}