#include<stdio.h>
int main()
{
    
    int a = 0;
    int i;
    int j;

    printf("请输入一个数字：\n");
    scanf("%d", &a);

    if(a>6)
    {
        printf("输入的数字不符合要求，请重新输入：");
        scanf("%d", &a);
    }
    if(a<=0)
    {
        printf("输入的数字不符合要求，请重新输入：");
        scanf("%d", &a);
    }

    int t = 0;

    for (i = a; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            t++;
            printf("%d%d%d", a,i,j);
            if(t==3)
            {
                printf(" ");
            }
            if(t==18)
            {
                printf("\n");
                t=0;
            }
            
        }

        return 0;
    }
}