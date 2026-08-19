#include <iostream>
using namespace std;

int x1[100] = {};
int x2[100] = {};

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x1[i]>>x2[i];
    }

    for(int i = 0; i < n; i++){   
            x1[i] += 100;
            x2[i] += 100;
    }


    int line[200] = {};
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j < x2[i]; j++){
            line[j]++;
        }
    }
    
    
    int max = 0;
    for(int i = 0; i < 200; i++){
        if(line[i] > max){
            max = line[i];
        }
    }
    cout<<max;
    return 0;
}