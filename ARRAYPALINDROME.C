#include<stdio.h>
int main ()
{
    int n , i , j , pali = 1 ; scanf("%d",&n);
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0 ; i < n ; i++ )
    {
            if ( arr[i]!=arr[n-i-1] )
            {
                pali = 0 ;
                break ;
            }
    }
    if ( pali == 1 )
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
}