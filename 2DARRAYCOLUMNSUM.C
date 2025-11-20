#include<stdio.h>
int main ()
{
    int n , m , i , j , sum ; scanf("%d",&n) ; scanf("%d",&m) ;
    int arr[n][m] ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("MATRIX : \n");
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++ )
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n") ;
    }

    for ( j = 0 ; j < m ; j++ )
    {
        sum = 0 ;
        for ( i = 0 ; i < n ; i++ )
        {
            sum = sum + arr[i][j];
        }
        printf("Column %d Sum is %d",j+1,sum);
        printf("\n");
    }
}