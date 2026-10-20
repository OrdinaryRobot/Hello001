//
// Created by xiaoyuer on 2026/10/13.
//
#include <windows.h>
#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);

    switch (a) {
        case 1:
            printf("星期一");
            break;
        case 2:
            printf("星期二");
            break ;
        case 3:
            printf("星期三");
            break;
        default:
            printf("我不知道");
            break;
    }
    return 0;
}

