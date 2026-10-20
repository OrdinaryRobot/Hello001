//
// Created by xiaoyuer on 2026/10/16.
//
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand((unsigned int)time(NULL));
    printf("%d",rand());

    return 0;
}
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main(){


        
        srand((unsigned int)time(NULL));
        int n= rand() % 100;

        printf("我生成了一个 0-99 的数字，你猜猜\n");  
        
        int a=0;
        int t=0;

      // 循环猜，直到猜对
       while (1) {
       
        scanf("%d", &a);
        t++; 

        if (a > n) {
            printf("大了！\n");
        } else if (a < n) {
            printf("小了！\n");
        } else {
            printf("对了！\n");
            break;  // 猜对了就跳出循环
        }
    }
    

    printf("猜了%d次",t);



    return 0;
    }
