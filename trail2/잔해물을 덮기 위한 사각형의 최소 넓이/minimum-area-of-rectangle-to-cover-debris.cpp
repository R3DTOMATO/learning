#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    int extent[2001][2001] = {};

    for(int i = 0; i < 2; i++){
        x1[i] += 1000;
        x2[i] += 1000;
        y1[i] += 1000;
        y2[i] += 1000;
    }

    for(int i = x1[0]; i < x2[0]; i++){
        for(int j = y1[0]; j < y2[0]; j++){
            extent[i][j]++;
        }
    }

    for(int i = x1[1]; i < x2[1]; i++){
        for(int j = y1[1]; j < y2[1]; j++){
            extent[i][j]--;
        }
    }

    int result_x1 = 2001;
    int result_y1 = 2001;
    int result_x2 = 0;
    int result_y2 = 0;
    int result[2][2] = {};

    for(int i = x1[0]; i < x2[0]; i++){
        for(int j = y1[0]; j < y2[0]; j++){
            if(extent[i][j] == 1 && result_x1 > i){
                result_x1 = i;
            }
            if(extent[i][j] == 1 && result_x2 < i){
                result_x2 = i;
            }
            if(extent[i][j] == 1 && result_y1 > j){
                result_y1 = j;
            }
            if(extent[i][j] == 1 && result_y2 < j){
                result_y2 = j;
            }
        }
    }

    int result_extent = 0;

    for(int i = result_x1; i <= result_x2; i++){
        for(int j = result_y1; j <= result_y2; j++){
            result_extent++;
        }
    }

    cout<<result_extent;

    return 0;
}