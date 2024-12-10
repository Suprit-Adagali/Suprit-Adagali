#include<stdio.h>
void bankTransfer(int *accountBalance1,int*accountBalance2,int amt) //int *roomkey1=&guest1,int*roomkey2=&guest2
{
    *accountBalance1=(*accountBalance1)-amt;
    *accountBalance2=(*accountBalance2)+amt;
}
int main()
{
    int balance1=0, balance2=0,amount=0;
    printf("enter account number for user1:");
    scanf("%d" , &balance1);
    printf("enter account number for user2:");
    scanf("%d", &balance2);
    printf("enter amount to tranfer:");
    scanf("%d",&amount);
    printf("before transaction between 2 accounts:%d,%d",balance1,balance2);
    bankTransfer(&balance1,&balance2, amount);
    printf("\nafter transaction between 2 accounts:%d,%d",balance1,balance2);
    return 0;
}