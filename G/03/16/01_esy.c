#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,cow,num;
    float avg;
    do{scanf("%d",&cow);}while(i<=0);
    for(i=0;i!=cow;i++)
    {
        scanf("\n%d",&num);
        sum=sum+num;
    }
    avg=sum/cow;
    printf("\nSum: %d\nAvg: %.2f",sum,avg);
    return 0;
}
