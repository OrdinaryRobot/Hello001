#include<stdio.h>
int main(){
    int m,k,g,p;

    scanf("%d %d %d %d",&m,&k,&g,&p);

    int n=0;//记录获得的酒数
    int buy=0;//买到的酒
    //买到m/p瓶酒，得到m/p个盖子，可换(m/p)/4+（m/p)/2酒
    buy=(int)m/p;
    int g1=buy+g;
    int k1=buy+k;
    while(k1>=2 || g1>=4){
        if(k1<=2 && g1>=4){
           n=n+buy+(int)(g1)/4;    
        }else if(k1>=2 && g1<4){
            n=n+buy+(int)(k1)/2;
        }else{
        n=n+buy+(int)(g1)/4+(int)(k1)/2;
        }
        g1-=4;
        k1-=2;
    }
    printf("%d",n);

    return 0;
}