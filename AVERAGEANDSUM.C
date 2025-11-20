#include<stdio.h>
int main ()
{
    int n , i ; scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    float sum = 0 , size;
    size = sizeof(arr)/sizeof(arr[0]) ;
    float avg ;
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d ",arr[i]);
        sum += arr[i];
    }
    printf("\nsum : %.0f",sum);
    printf("\nsize : %.0f",size);
    avg = (sum / size) ;
    printf("\navg : %.2f",avg);
}