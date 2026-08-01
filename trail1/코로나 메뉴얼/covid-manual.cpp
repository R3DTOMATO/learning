#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a1,b1,c1;
    int a2,b2,c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;

    if(a1=='Y'&&a2>=37){
        if((b1=='Y'&&b2>=37)||c1=='Y'&&c2>=37){
            cout<<"E";
        }else{
            cout<<"N";
        }
    }else{
        if((b1=='Y'&&b2>=37)){
            if(c1=='Y'&&c2>=37){
                cout<<"E";
            }else{
                cout<<"N";
            }
        }else{
            cout<<"N";
        }
    }

    return 0;
}