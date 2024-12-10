#include<stdio.h>
int main()
{
    int arr[10]={30,-3,4,33,55};
    int n=sizeof(arr) / sizeof(arr[6]);
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==-3)
        {
            printf("%d",i);
        }
    }    
    return 0;
}