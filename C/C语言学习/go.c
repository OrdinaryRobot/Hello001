#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int m = 0;

    printf("请输入不超过100的数字：");
    scanf("%d", &j);

    for (i = 0; i <= 100;i++)
    {
        for (m = j; m <= 100;m++)
        {
            if(i%=m==2)
            {
                goto label;
            }
    }
}label:
    printf("此时余数为二\n");
    

}