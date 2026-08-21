#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];
int OFFSET_A[2000001] = {};
int OFFSET_B[2000001] = {};
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Please write your code here.
    int loc_A = 0;
    int loc_B = 0;

    int time_A = 0;
    int time_B = 0;
    OFFSET_A[0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < t[i]; j++){
            if(d[i] == 'R'){
                loc_A++;
            }else if(d[i] == 'L'){
                loc_A--;
            }
            time_A++;
            OFFSET_A[time_A] = loc_A;
        }
    }

    OFFSET_B[0] = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < t2[i]; j++){
            if(d2[i] == 'R'){
                loc_B++;
            }else if(d2[i] == 'L'){
                loc_B--;
            }
            time_B++;
            OFFSET_B[time_B] = loc_B;
        }
    }
    
    int meet_time = -1;

    for(int i = 1; i <= time_A; i++){
        if((OFFSET_B[i] == OFFSET_A[i])){
            meet_time = i;
            break;
        }
    }
    cout << meet_time;
    return 0;
}