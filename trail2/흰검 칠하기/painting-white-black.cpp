#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

char color_cnt[200001] = {};
int black_cnt[200001] = {};
int white_cnt[200001] = {};
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    

    const int OFFSET = 100000;
    int location = OFFSET;
    for (int i = 0; i < n; i++) {
        
        if (dir[i] == 'R') {
            for (int j = 0; j < x[i]; j++) {
                color_cnt[location] = 'B';
                black_cnt[location]++;
                if(j != x[i] - 1){
                    location++;
                }
                
            }
        }

        else if (dir[i] == 'L') {
            for (int j = 0; j < x[i]; j++) {
                
                color_cnt[location] = 'W';
                white_cnt[location]++;
                if(j != x[i] - 1){
                    location--;
                }
                
            }
        }
    }

    int black = 0;
    int white = 0;
    int gray = 0;

    for(int i = 0; i < 200001; i++){
        if(white_cnt[i] >=2 && black_cnt[i] >= 2){
            gray++;
        }else if(color_cnt[i] == 'W' ){
            white++;
        }else if(color_cnt[i] == 'B'){
            black++;
        }
    }

    cout<<white<<" "<<black<<" "<<gray;


    return 0;
}