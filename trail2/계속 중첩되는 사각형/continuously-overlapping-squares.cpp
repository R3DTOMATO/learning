#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];

char extent_char[201][201] = {};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.



    for(int i = 0; i < n; i++){
        x1[i] += 100;
        x2[i] += 100;
        y1[i] += 100;
        y2[i] += 100;
    }

    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j < x2[i]; j++){
            for(int k = y1[i]; k < y2[i]; k++){
                if(i % 2 == 1){
                    extent_char[j][k] = 'B';
                }else if(i % 2 == 0){
                    extent_char[j][k] = 'R';
                }
            }
        }
    }

    int extent = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(extent_char[i][j] == 'B'){
                extent++;
            }
        }
    }

    cout<<extent;

    return 0;
}