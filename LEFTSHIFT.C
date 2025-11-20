#include<stdio.h>
int main ()
{
    int n , i ; scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    int val ; scanf("%d",&val);
    for ( i = n - val ; i < n ; i++ )
    {
        printf("%d ",arr[i]);
    }
    for ( i = 0 ; i < n - val ; i++ )
    {
        printf("%d ",arr[i]);
    }
}