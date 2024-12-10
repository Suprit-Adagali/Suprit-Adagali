#include<stdio.h>
int countDigits(int);
int main()
{
    int number=0;
    printf("enter a number");
    scanf("%d",&number);
    int sum=0;
    sum=countDigits(number);
    printf("count of %d is=%d",number,sum);
    return 0;
}
int countDigits(int num)
{
    static int count=0;
    if(num!=0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}