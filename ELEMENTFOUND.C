#include<stdio.h>
int main ()
{
    int n , i ; scanf("%d",&n);
    int val ; scanf("%d",&val);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d ",arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
        if ( val == arr[i])
        {
            printf("\n%d is found at index %d",val,i);
            break ;
        }
    }
    if (val != arr[i])
    {
        printf("\n%d is not found",val);
    }

}