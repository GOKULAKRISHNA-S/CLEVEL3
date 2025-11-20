#include<stdio.h>
int main ()
{
    int n , m , i , j , k , r , c ;
    scanf("%d %d",&n,&m) ;
    int a[n][m] ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++ )
        {
            scanf("%d",&a[i][j]) ;
        }
    }
    scanf("%d %d",&r,&c);
    int b[r][c] ;
    for ( i = 0 ; i < r ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            scanf("%d",&b[i][j]) ;
        }
    }
    if ( m != r )
    {
        printf("Matrix multiplication is not possible");
        return 0 ;
    }
    int result[n][c];
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            result[i][j] = 0 ;
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            for ( k = 0 ; k < m ; k++ )
            {
                result[i][j] += a[i][k]*b[k][j] ;
            }
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            printf("%d ",result[i][j]) ;
        }
        printf("\n");
    }
}