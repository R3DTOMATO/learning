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
        if(a[i] == '0'){
            a[i] = '1';
            temp = '0';
        }else if(a[i] == '1'){
            a[i] = '0';
            temp = '1';
        }
        int binary[a.size()] = {};
        for(int j = 0; j < a.size(); j++){
            binary[j] = a[j] - 48;
        }
        decimal = 0;
        for(int j = 0; j < a.size(); j++){
            decimal = decimal * 2 + binary[j];
        }
        if(max_decimal < decimal){
            max_decimal = decimal;
        }
        a[i] = temp;
    }

    cout<<max_decimal;
    return 0;
}