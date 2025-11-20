#include<stdio.h>
int main ()
{
    int n , sum = 0  , size , i ; float avg ;
    scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d ",arr[i]);
        sum = sum + arr[i];
    }
    printf("\n%d",sum);
    size = sizeof(arr)/sizeof(arr[0]);
    printf("\n%d",size);
    avg = float(sum/size);
    printf("\n%.2f",avg);
}