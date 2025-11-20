#include<stdio.h>
int main ()
{
    int n , i , j , dup , temp ; scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
        dup = 0 ;
        for ( j = i+1 ; j < n ; j++ )
        {
            if (arr[i]==arr[j] && i!=j )
            {
                dup = 1 ;
                break ;
            }
            if ( arr[i] > arr[j] )
            {
              temp = arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }
        }
        if ( dup == 0 )
        {
            printf("%d ",arr[i]);
        } 
    }
}