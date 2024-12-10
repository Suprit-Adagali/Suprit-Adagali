#include<stdio.h>
int change(int*);
int main()
{
    int x=10;
    int c=0;
    printf("Before change x is %d\n",x);
    printf("address of x:%d\n",&x);
    c=change(&x);

    printf("After change x is %d\n",c);
    return 0;
}
int change(int *num) //int *num=&x;
{
    int x=20;
    printf("address of x in change():%p",&x);
    num=&x;
    printf("inside function x is %d\n",num);
    return num; 
}