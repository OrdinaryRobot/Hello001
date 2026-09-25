#include<stdio.h>
int main()
{
    int sum=0;
    int count=0;
    int num=0;
    
        scanf ("%d",&num);
        while(num!=-1){
       
            
            sum += num;
            count++;
            scanf ("%d",&num);
    }   
    printf("%f\n",1.0*sum/count)
;
return 0;

}