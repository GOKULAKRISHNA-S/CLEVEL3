#include<stdio.h>
int main ()
{
    int n , i , max , min ; scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d ",arr[i]);
    }
    max = arr[0];
    int max2 = -2147483648 ;
    for( i = 0 ; i < n ; i++ )
    {
        if ( max < arr[i] )
        {
            max = arr[i] ;
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
      if ( max2 < arr[i] && arr[i] != max )
      {
        max2 = arr[i];
      }
    }
    printf("\nmax : %d",max);
    printf("\nmaxi : %d",max2);
    min = arr[0];
    int min2 = 2147483647 ;
    for( i = 0 ; i < n ; i++ )
    {
        if ( min > arr[i] )
        {
            min = arr[i] ;
        }
    }
    for( i = 0 ; i < n ; i++ )
    {
        if ( min2 > arr[i] && arr[i] != min )
        {
            min2 = arr[i] ;
        }
    }
    printf("\nmin : %d",min);
    printf("\nmini : %d",min2);
}