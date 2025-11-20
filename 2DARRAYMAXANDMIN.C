#include<stdio.h>
int main ()
{
    int n , m , i , j , max , min ; scanf("%d %d",&n,&m);
    int arr[n][m];
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++)
        {
            scanf("%d",&arr[i][j]);
        }       
    }
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++)
        {
            printf("%02d ",arr[i][j]);
        } 
        printf("\n");      
    }
    max = arr[0][0] ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++)
        {
            if ( max < arr[i][j] )
            {
                max = arr[i][j] ;
            }
        }      
    }
    printf("MAX : %d\n",max);
    min = arr[0][0] ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0 ; j < m ; j++)
        {
            if ( min > arr[i][j] )
            {
                min = arr[i][j] ;
            }
        }      
    }
    printf("MIN : %d\n",min);
}