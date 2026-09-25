#include <stdio.h>
int main()
{
   int n=0;
    int num=0;

    printf("请输入一个数字：");         
    scanf("%d",&num);
    for(n=1;num>=10;n++)
    {
        num/=10;
    }
    printf("该整数的位数为：%d\n",n);
    return 0;
    
}