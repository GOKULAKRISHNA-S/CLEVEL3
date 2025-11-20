#include<stdio.h>
int main ()
{
    int n , i ; scanf("%d",&n);
    int arr[n] ;
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
        if ( i==0 && arr[i]>=arr[i+1] )
        {
            printf("%d ",arr[i]);
        }
        else if ( i > 0 && i < n-1 && arr[i]>=arr[i+1] && arr[i]>=arr[i-1] )
        {
            printf("%d ",arr[i]);
        }
        else if ( i == n-1 && arr[i]>=arr[i-1] )
        {
            printf("%d ",arr[i]);
        }
    }
}