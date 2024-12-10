#include<stdio.h>
int main()
{
    int arr[10]={30,-3,4,33,55};
    for(int i=0;i<=(sizeof(arr) / sizeof(arr[0])); i++)
    {
        if(arr[1]>0)
        {
            printf("%d",arr[i]);
        }
        else
        {
            printf("%d",arr[i]);
        }
    }
    return 0;
}