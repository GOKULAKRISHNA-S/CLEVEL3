#include<stdio.h>
int main ()
{
    int n , m , i , j , sum = 0 ; scanf("%d",&n) ; scanf("%d",&m) ;
    int arr[n][m];
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++ )
        {
            printf("%02d ",arr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%02d ",arr[i][i]) ;
        sum = sum + arr[i][i] ;
    }
    printf("\n%d",sum);
    
}