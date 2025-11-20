#include<stdio.h>
int main ()
{
    int n , m , i , j , sum , max ; scanf("%d",&n) ; scanf("%d",&m) ;
    int arr[n][m] ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int ar[n];
    for ( i = 0 ; i < n ; i++ )
    {
        sum = 0 ;
        for ( j = 0 ; j < m ; j++ )
        {
            sum = sum + arr[i][j];
        }
        ar[i]=sum ;
        printf("%d ", sum );
    }
    max =ar[0] ;
    int row = 0 ;
    for ( i = 0 ; i < n ; i++ )
    {
        if ( max < ar[i] )
        {
            max = ar[i];
            row = i + 1 ;
        }
    }
    printf("\nrow : %d has max sum : %d",row,max);
    }