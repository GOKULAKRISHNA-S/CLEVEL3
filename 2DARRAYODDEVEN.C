#include<stdio.h>
int main ()
{
    int n , m , i , j , even = 0 , odd = 0 ; scanf("%d",&n) ; scanf("%d",&m) ;
    int arr[n][m] ;
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
            if ( arr[i][j]%2==0 )
            {
                even ++ ;
            }
            else
            {
                odd++ ;
            }
        }
    }
    printf("EVEN COUNT : %d\n",even);
    printf("ODD COUNT : %d",odd);

}