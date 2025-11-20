#include<stdio.h>
int main ()
{
    int n , m , i , j ;
    scanf("%d %d",&n,&m);
    int arr[n][m];
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
        printf("\n");
    }
    printf("TRANSPOSE : \n");
    for ( i = 0 ; i < m ; i++ )
    {
        for ( j = 0 ; j < n ; j++ )
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    int sym = 1 ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++ )
        {
            if ( arr[i][j]!=arr[j][i])
            {
                sym = 0 ;
                break ;
            }
        }
    }
    if ( sym )
    {
        printf("IT IS SYMMETRIC");
        return 0 ;
    }
    else
    {
        printf("IT IS NOT SYMMETRIC");
    }
}