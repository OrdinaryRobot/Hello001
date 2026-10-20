#include <bits/stdc++.h>
using namespace std;

int main() {
//定义数组
    int n,m;
    int a[100][100];
//输入设置
    cin>>n>>m;
    int i;
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
//典型错误：sum=0放在这里导致总是出错
    for(int t=0;t<n;t++){
        long long sum=0;//每一轮循环sum归零，防止各行数值累加
        for(int x=0;x<m;x++){
            sum+=a[t][x];
        }
        cout<<sum<<" ";//输出每一行都和
    }

    return 0;
}
