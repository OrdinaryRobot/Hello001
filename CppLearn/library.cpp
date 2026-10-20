#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1,m1;
    int h2,m2;

    cin>>h1>>m1;
    cin>>h2>>m2;

    if(h1>h2){
        return 0;
    }
    int e=0;
    int h3,m3;

    e=h2*60+m1-h1*60-m2;

    h3=e/60;
    m3=e%60;

    cout<<h3<<" "<<m3;

    return 0;
}

