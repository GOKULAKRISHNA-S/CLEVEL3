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
    int trans[m][n];
    for ( i = 0 ; i < m ; i++ )
    {
        for ( j = 0 ; j < n ; j++ )
        {
            trans[i][j]=arr[j][i];
        }
    }
    printf("transpose : \n");
    for ( i = 0 ; i < m ; i++ )
    {
        for ( j = 0 ; j < n ; j++ )
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    printf("rotate : \n");
    for ( j = 0 ; j < m ; j++ )
    {
    for ( i = n-1 ; i >= 0 ; i-- )
    {
        printf("%d ",trans[j][i]);
    }
    printf("\n");
    }
}