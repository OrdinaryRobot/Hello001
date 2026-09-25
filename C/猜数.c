#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	
	printf("我已经想好了一个1到100的数");
	do{
		printf("猜猜这个数：")
		;
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你猜大了");
			 
		} else if(a<number){
			printf("你猜小了"); 
		}
	} while(a!=number)
;	
	
	printf("%d次猜到答案",count);
	return 0;
	
}
