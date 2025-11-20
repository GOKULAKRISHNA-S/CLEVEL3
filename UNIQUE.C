#include<stdio.h>
int main ()
{
    int n , i , j , temp , uni ; scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf ("%d",&arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = i+1 ; j < n ; j++ )
        {
            if ( arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
        uni = 0 ;
        for ( j = 0 ; j < n ; j++ )
        {
            if ( arr[i]==arr[j] )
            {
                uni ++ ;
            }
        }
        if ( uni==1 )
        {
            printf("%d ",arr[i]) ;
        }
    }
}